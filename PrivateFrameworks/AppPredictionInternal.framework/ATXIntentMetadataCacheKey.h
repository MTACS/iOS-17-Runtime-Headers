
@interface ATXIntentMetadataCacheKey : NSObject {
    NSString * _bundleId;
    NSString * _intentClassName;
    unsigned long long  _intentHash;
    NSString * _localeIdentifier;
    NSSet * _nonNilParameters;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *intentClassName;
@property (nonatomic, readonly) unsigned long long intentHash;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) NSSet *nonNilParameters;

- (void).cxx_destruct;
- (id)bundleId;
- (id)initWithIntent:(id)arg1 includingParameterValues:(bool)arg2 localeIdentifier:(id)arg3;
- (id)initWithIntent:(id)arg1 includingParameters:(bool)arg2;
- (id)initWithIntent:(id)arg1 includingParameters:(bool)arg2 includingParameterValues:(bool)arg3 localeIdentifier:(id)arg4;
- (id)intentClassName;
- (unsigned long long)intentHash;
- (id)localeIdentifier;
- (id)nonNilParameters;
- (id)stringRepresentationForSerialization;

@end
