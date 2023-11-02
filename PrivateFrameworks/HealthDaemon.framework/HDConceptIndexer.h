
@interface HDConceptIndexer : NSObject <HDConceptIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)indexSamplesForProfile:(id)arg1 limit:(unsigned long long)arg2 outIndexedSamplesCount:(long long*)arg3 error:(id*)arg4;
+ (bool)resetIndexManagerStateForProfile:(id)arg1 withError:(id*)arg2;
+ (id)stateWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)storeState:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

- (id)init;

@end
