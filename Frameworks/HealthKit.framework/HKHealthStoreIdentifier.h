
@interface HKHealthStoreIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
}

@property (readonly, copy) NSUUID *identifier;
@property (getter=isPrimaryStoreIdentifier, readonly) bool primaryStoreIdentifier;
@property (readonly, copy) HKProfileIdentifier *profileIdentifier;

+ (id)identifierFromProfileIdentifier:(id)arg1;
+ (id)primaryStoreIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initPrimaryStoreIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryStoreIdentifier;
- (id)profileIdentifier;

@end
