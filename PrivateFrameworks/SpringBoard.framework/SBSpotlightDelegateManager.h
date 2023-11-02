
@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate> {
    NSMutableDictionary * _delegatesForLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableDictionary *delegatesForLevel;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_modifyDelegatesWithBlock:(id /* block */)arg1;
- (id)activeDelegate;
- (void)addSpotlightDelegate:(id)arg1 forLevel:(unsigned long long)arg2;
- (id)delegatesForLevel;
- (void)dismissSearchView;
- (void)removeSpotlightDelegate:(id)arg1 forLevel:(unsigned long long)arg2;
- (void)searchViewContentAvailabilityDidChange;
- (void)searchViewKeyboardPresentationStateDidChange;
- (void)setDelegatesForLevel:(id)arg1;

@end
