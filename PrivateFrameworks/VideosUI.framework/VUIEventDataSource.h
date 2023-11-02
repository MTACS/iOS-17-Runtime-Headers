
@interface VUIEventDataSource : NSObject {
    VUIAction * _action;
    VUIDocumentDataSource * _documentDataSource;
    VUIMediaEntity * _mediaEntity;
    VUIAction * _postAction;
    VUIDocumentDataSource * _postActionDocumentDataSource;
    VUIAction * _preAction;
    VUIDocumentDataSource * _preActionDocumentDataSource;
}

@property (nonatomic, retain) VUIAction *action;
@property (nonatomic, retain) VUIDocumentDataSource *documentDataSource;
@property (nonatomic, retain) VUIMediaEntity *mediaEntity;
@property (nonatomic, retain) VUIAction *postAction;
@property (nonatomic, retain) VUIDocumentDataSource *postActionDocumentDataSource;
@property (nonatomic, retain) VUIAction *preAction;
@property (nonatomic, retain) VUIDocumentDataSource *preActionDocumentDataSource;

+ (id)_actionForKey:(id)arg1 eventDict:(id)arg2 appContext:(id)arg3;
+ (id)_documentDataSourceWithDict:(id)arg1;
+ (id)attachPrefetchedDict:(id)arg1 eventDict:(id)arg2;
+ (id)eventDataSourceWithEventDict:(id)arg1 appContext:(id)arg2;
+ (id)selectEventDataSourceWithLibraryMediaEntity:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithLibraryMediaEntity:(id)arg1;
- (id)action;
- (id)documentDataSource;
- (id)mediaEntity;
- (id)postAction;
- (id)postActionDocumentDataSource;
- (id)preAction;
- (id)preActionDocumentDataSource;
- (void)setAction:(id)arg1;
- (void)setDocumentDataSource:(id)arg1;
- (void)setMediaEntity:(id)arg1;
- (void)setPostAction:(id)arg1;
- (void)setPostActionDocumentDataSource:(id)arg1;
- (void)setPreAction:(id)arg1;
- (void)setPreActionDocumentDataSource:(id)arg1;

@end
