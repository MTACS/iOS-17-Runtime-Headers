
@interface _SBRootFolderViewElementBorrowedAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    SBRootFolderView * _folderView;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBRootFolderView *folderView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)folderView;
- (id)initWithFolderView:(id)arg1 reason:(id)arg2;
- (void)invalidate;
- (id)reason;
- (void)setFolderView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
