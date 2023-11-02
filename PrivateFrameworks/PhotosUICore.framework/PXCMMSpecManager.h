
@interface PXCMMSpecManager : PXFeatureSpecManager {
    unsigned long long  _activityType;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) PXCMMSpec *spec;

- (unsigned long long)activityType;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 activityType:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;

@end
