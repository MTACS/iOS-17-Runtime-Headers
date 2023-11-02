
@interface CRFragmentedDetectedLineRegion : CRDetectedLineRegion <CRFragmentedRegion, CRWritableFragmentedRegion> {
    NSArray * _regionFragments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *regionFragments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_copyContentsToObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)regionFragments;
- (void)setRegionFragments:(id)arg1;

@end
