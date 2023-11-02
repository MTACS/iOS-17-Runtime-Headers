
@interface FBSSceneSnapshotRequestHandle : NSObject {
    bool  _canceled;
    FBSSceneSnapshotContext * _context;
    BSActionResponder * _responder;
    unsigned long long  _type;
}

+ (id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_clearAction;
- (void)cancelRequest;
- (id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2;
- (void)performRequestForScene:(id)arg1;

@end
