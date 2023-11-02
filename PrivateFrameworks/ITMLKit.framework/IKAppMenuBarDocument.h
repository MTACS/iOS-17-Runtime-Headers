
@interface IKAppMenuBarDocument : NSObject <IKDOMFeature, IKJSMenuBarDocumentAppBridge> {
    IKAppContext * _appContext;
    <IKAppMenuBarDocumentDelegate> * _delegate;
    NSMutableDictionary * _documentOptionsByEntityUniqueIdentifier;
    NSMutableDictionary * _documentsByEntityUniqueIdentifier;
    NSString * _featureName;
    NSMutableDictionary * _jsDocumentsByEntityUniqueIdentifier;
    IKViewElement * _menuBarElement;
    IKDOMNode * _parentDOMNode;
    <NSCopying> * _selectedEntityUniqueIdentifier;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKAppMenuBarDocumentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (nonatomic) IKViewElement *menuBarElement;
@property (nonatomic, retain) IKViewElement *selectedMenuItem;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (void)_evaluateDelegateBlockSync:(id /* block */)arg1;
- (id)_menuItemElementForEntityUniqueIdentifier:(id)arg1;
- (id)appContext;
- (id)delegate;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
- (id)documentForMenuItem:(id)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForMenuItem:(id)arg1;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)jsMenuBarDocument:(id)arg1 documentForEntityUniqueIdentifier:(id)arg2;
- (void)jsMenuBarDocument:(id)arg1 setDocument:(id)arg2 forEntityUniqueIdentifier:(id)arg3 withOptions:(id)arg4;
- (void)jsMenuBarDocument:(id)arg1 setSelectedEntityUniqueIdentifier:(id)arg2 withOptions:(id)arg3;
- (id)menuBarElement;
- (void)migrateToViewElement:(id)arg1;
- (id)selectedItemForJsMenuBarDocument:(id)arg1;
- (id)selectedMenuItem;
- (void)setDelegate:(id)arg1;
- (void)setMenuBarElement:(id)arg1;
- (void)setSelectedMenuItem:(id)arg1;

@end