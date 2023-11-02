
@interface FCCKTestContentDatabaseFeedCursor : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _order;
    NSNumber * _subOrder;
}

@property (nonatomic, copy) NSNumber *order;
@property (nonatomic, copy) NSNumber *subOrder;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)order;
- (void)setOrder:(id)arg1;
- (void)setSubOrder:(id)arg1;
- (id)subOrder;

@end
