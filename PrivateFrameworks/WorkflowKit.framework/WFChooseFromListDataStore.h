
@interface WFChooseFromListDataStore : NSObject <NSXPCListenerDelegate, WFDialogListItemStore> {
    NSMutableDictionary * _contentItems;
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) NSMutableDictionary *contentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addContentItem:(id)arg1 withIdentifier:(id)arg2;
- (id)contentItems;
- (id)endpoint;
- (void)hasAltTextForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hasImageForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)hasSubtitleForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadAltTextWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)loadImageWithIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)loadSubtitleWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeContentItemWithIdentifier:(id)arg1;
- (void)setContentItems:(id)arg1;

@end
