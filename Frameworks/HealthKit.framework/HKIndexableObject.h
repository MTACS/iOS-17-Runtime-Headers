
@interface HKIndexableObject : NSObject {
    unsigned long long  _compoundIndex;
    id  _object;
}

@property (nonatomic, readonly) unsigned long long compoundIndex;
@property (nonatomic, readonly, copy) id object;
@property (nonatomic, readonly) unsigned char outermostIndex;

+ (id)indexableObjectWithObject:(id)arg1;
+ (id)indexableObjectWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2;
+ (id)indexableObjectWithObject:(id)arg1 index:(unsigned char)arg2 error:(id*)arg3;
+ (id)indexableObjectsByApplyingOutermostIndex:(id)arg1 expectedCount:(long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)compoundIndex;
- (id)indexableObjectCollectingPushingIndex:(unsigned char)arg1 error:(id*)arg2;
- (id)indexableObjectPoppingIndexWithError:(id*)arg1;
- (id)init;
- (id)initWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2;
- (id)object;
- (unsigned char)outermostIndex;

@end
