
@interface _SBFolderControllerIconImageViewControllerKeepSnapshotAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    SBFolderController * _folderController;
    bool  _invalidated;
    NSIndexSet * _pageIndexesToExclude;
    NSString * _reason;
    unsigned long long  _snapshotType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFolderController *folderController;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSIndexSet *pageIndexesToExclude;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) unsigned long long snapshotType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)folderController;
- (id)initWithFolderController:(id)arg1 snapshotType:(unsigned long long)arg2 pageIndexesToExclude:(id)arg3 reason:(id)arg4;
- (void)invalidate;
- (bool)isInvalidated;
- (id)pageIndexesToExclude;
- (id)reason;
- (void)setInvalidated:(bool)arg1;
- (unsigned long long)snapshotType;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
