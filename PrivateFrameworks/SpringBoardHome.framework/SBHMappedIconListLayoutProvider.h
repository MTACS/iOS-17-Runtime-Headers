
@interface SBHMappedIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    NSMutableDictionary * _mappedIconLocations;
    <SBIconListLayoutProvider> * _targetListLayoutProvider;
}

@property (nonatomic, readonly) <SBIconListLayoutProvider> *targetListLayoutProvider;

- (void).cxx_destruct;
- (id)initWithTargetListLayoutProvider:(id)arg1;
- (id)layoutForIconLocation:(id)arg1;
- (void)mapIconLocation:(id)arg1 toIconLocation:(id)arg2;
- (id)targetListLayoutProvider;

@end
