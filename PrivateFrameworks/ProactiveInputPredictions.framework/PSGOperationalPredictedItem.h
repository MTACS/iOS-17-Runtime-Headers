
@interface PSGOperationalPredictedItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _itemIdentifier;
    NSDictionary * _operationData;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSDictionary *operationData;
@property (nonatomic, readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 value:(id)arg2 bundleIdentifier:(id)arg3 operationData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (id)itemIdentifier;
- (id)operationData;
- (id)value;

@end
