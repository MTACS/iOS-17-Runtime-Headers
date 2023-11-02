
@interface _REPerformedActionKey : NSObject {
    NSString * _bundleIdentifier;
    <REDonatedActionIdentifierProviding> * _identifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) <REDonatedActionIdentifierProviding> *identifier;

+ (id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;

@end
