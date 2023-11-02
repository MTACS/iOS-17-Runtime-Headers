
@interface BRQueryStitch : NSObject {
    NSArray * _contexts;
    NSURL * _fromURL;
    BOOL  _kind;
    BRFileObjectID * _objid;
    NSURL * _url;
}

@property (nonatomic, retain) NSArray *contexts;
@property (nonatomic, retain) NSURL *fromURL;

- (void).cxx_destruct;
- (void)_creationDone;
- (void)_deletionDone;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_renameDone;
- (id)contexts;
- (void)dealloc;
- (id)description;
- (void)done;
- (id)fromURL;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;
- (void)setContexts:(id)arg1;
- (void)setFromURL:(id)arg1;
- (void)setQueries:(id)arg1;

@end
