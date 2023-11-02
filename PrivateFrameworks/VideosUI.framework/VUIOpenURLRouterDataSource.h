
@interface VUIOpenURLRouterDataSource : NSObject {
    VUIAction * _action;
    bool  _actionFirst;
    NSArray * _documentDataSources;
    NSDictionary * _localLibraryLink;
    NSString * _nativePageName;
    VUIAction * _postAction;
    NSString * _tabIdentifier;
}

@property (nonatomic, retain) VUIAction *action;
@property (nonatomic) bool actionFirst;
@property (nonatomic, copy) NSArray *documentDataSources;
@property (nonatomic, copy) NSDictionary *localLibraryLink;
@property (nonatomic, retain) NSString *nativePageName;
@property (nonatomic, retain) VUIAction *postAction;
@property (nonatomic, retain) NSString *tabIdentifier;

+ (id)routerDataSourceWithDict:(id)arg1 appContext:(id)arg2;

- (void).cxx_destruct;
- (id)action;
- (bool)actionFirst;
- (id)documentDataSources;
- (id)localLibraryLink;
- (id)nativePageName;
- (id)postAction;
- (void)setAction:(id)arg1;
- (void)setActionFirst:(bool)arg1;
- (void)setDocumentDataSources:(id)arg1;
- (void)setLocalLibraryLink:(id)arg1;
- (void)setNativePageName:(id)arg1;
- (void)setPostAction:(id)arg1;
- (void)setTabIdentifier:(id)arg1;
- (id)tabIdentifier;

@end
