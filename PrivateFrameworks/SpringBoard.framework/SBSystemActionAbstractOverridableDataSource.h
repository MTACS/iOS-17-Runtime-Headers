
@interface SBSystemActionAbstractOverridableDataSource : SBSystemActionAbstractDataSource <SBSystemActionDataSourceOverridable> {
    NSMutableSet * _overriders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addOverrider:(id)arg1;
- (void)removeOverrider:(id)arg1;
- (void)setSelectedSystemAction:(id)arg1;

@end
