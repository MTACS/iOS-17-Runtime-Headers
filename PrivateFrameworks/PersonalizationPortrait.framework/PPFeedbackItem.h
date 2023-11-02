
@interface PPFeedbackItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _itemFeedbackType;
    NSString * _itemString;
}

@property (nonatomic, readonly) unsigned int itemFeedbackType;
@property (nonatomic, readonly) NSString *itemString;

+ (id)stringForItemFeedbackType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemString:(id)arg1 itemFeedbackType:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPPFeedbackItem:(id)arg1;
- (unsigned int)itemFeedbackType;
- (id)itemString;

@end
