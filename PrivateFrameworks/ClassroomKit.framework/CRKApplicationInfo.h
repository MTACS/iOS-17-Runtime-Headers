
@interface CRKApplicationInfo : NSObject {
    NSString * _bundleIdentifier;
    NSString * _shortVersionString;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *shortVersionString;

+ (id)bundleIdentifierFromDictionaryRepresentation:(id)arg1;
+ (id)bundleIdentifiersFromDictionaryRepresentations:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)shortVersionString;

@end
