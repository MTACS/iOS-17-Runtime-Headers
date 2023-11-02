
@interface FSFFeatureStoreService : NSObject

+ (void)insertCodingWithInteractionId:(id)arg1 item:(id)arg2;
+ (void)insertPBCodableWithInteractionId:(id)arg1 item:(id)arg2;
+ (id)interactionIdForInjection;
+ (id)retrieveCodingWithInteractionId:(id)arg1 klass:(Class)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)init;

@end
