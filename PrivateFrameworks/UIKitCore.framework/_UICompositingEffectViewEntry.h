
@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry {
    NSString * _filterType;
}

@property (nonatomic, copy) NSString *filterType;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)description;
- (id)filterType;
- (bool)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)setFilterType:(id)arg1;

@end
