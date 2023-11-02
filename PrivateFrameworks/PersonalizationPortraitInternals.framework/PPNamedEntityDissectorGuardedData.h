
@interface PPNamedEntityDissectorGuardedData : NSObject {
    _PASLazyPurgeableResult * _purgeableGazetteer;
}

@property (nonatomic, retain) _PASLazyPurgeableResult *purgeableGazetteer;

- (void).cxx_destruct;
- (id)purgeableGazetteer;
- (void)setPurgeableGazetteer:(id)arg1;

@end
