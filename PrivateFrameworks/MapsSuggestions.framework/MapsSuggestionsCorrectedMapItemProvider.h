
@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver> {
    MapsSuggestionsMeCard * _meCard;
    <MapsSuggestionsMeCardReader> * _meCardReader;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMeCardReader:(id)arg1 handler:(id /* block */)arg2;
- (id)mapItemFormShortcutForCNIdentifier:(id)arg1;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (id)uniqueName;

@end
