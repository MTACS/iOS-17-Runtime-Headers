
@interface PETLoggingUtils : NSObject

+ (void)_pushToBuffer:(id)arg1 keyStringForStringifiedPairs:(id)arg2;
+ (id)domainStringForEvent:(id)arg1 featureId:(id)arg2;
+ (id)keyStringForEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
+ (id)keyStringForStringifiedPairs:(id)arg1;
+ (id)messageKeyStringForKey:(id)arg1;

@end
