
@interface MapsSuggestionsNavigationStateChangedTrigger : MapsSuggestionsBaseTrigger <GEONavigationListenerDelegate, MapsSuggestionsCondition> {
    GEONavigationListener * _navigationListener;
    unsigned long long  _navigationState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (bool)isTrue;
- (void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;

@end
