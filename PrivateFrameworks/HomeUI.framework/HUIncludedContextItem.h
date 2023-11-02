
@interface HUIncludedContextItem : HFItem {
    unsigned long long  _contextType;
    <HFHomeKitObject> * _homeKitObject;
    NSNumber * _overrideHiddenState;
    NSNumber * _overridePrimaryState;
}

@property (nonatomic, readonly) unsigned long long contextType;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, retain) NSNumber *overrideHiddenState;
@property (nonatomic, retain) NSNumber *overridePrimaryState;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)contextType;
- (id)homeKitObject;
- (id)initWithHomeKitObject:(id)arg1 contextType:(unsigned long long)arg2;
- (id)overrideHiddenState;
- (id)overridePrimaryState;
- (void)setOverrideHiddenState:(id)arg1;
- (void)setOverridePrimaryState:(id)arg1;

@end
