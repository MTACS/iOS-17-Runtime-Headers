
@interface PKDiscoveryShelf : NSObject <NSSecureCoding> {
    PKDiscoveryItem * _item;
    NSString * _itemIdentifier;
    long long  _type;
}

@property (nonatomic) PKDiscoveryItem *item;
@property (nonatomic) long long type;

+ (id)shelfWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (void)setItem:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
