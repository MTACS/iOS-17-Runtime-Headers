
@interface CTSIMToolkitItemList : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _itemList;
}

@property (nonatomic, retain) NSArray *itemList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;

@end
