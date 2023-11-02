
@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument> {
    <IKJSMenuBarDocumentAppBridge> * _appBridge;
}

@property (nonatomic) <IKJSMenuBarDocumentAppBridge> *appBridge;

- (void).cxx_destruct;
- (id)_entityUniqueIdentifierForObject:(id)arg1;
- (id)appBridge;
- (id)getDocument:(id)arg1;
- (id)getSelectedItem;
- (void)setAppBridge:(id)arg1;
- (void)setDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (void)setSelectedItem:(id)arg1 :(id)arg2;

@end
