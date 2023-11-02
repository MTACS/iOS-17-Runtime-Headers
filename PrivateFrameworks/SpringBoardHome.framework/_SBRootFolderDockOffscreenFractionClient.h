
@interface _SBRootFolderDockOffscreenFractionClient : NSObject <BSDescriptionProviding, SBDockOffscreenFractionModifying> {
    double  _desiredOffscreenFraction;
    SBRootFolderView * _folderView;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredOffscreenFraction;
@property (nonatomic, retain) SBRootFolderView *folderView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)desiredOffscreenFraction;
- (id)folderView;
- (id)initWithFolderView:(id)arg1 reason:(id)arg2;
- (void)invalidate;
- (void)layoutIfNeededForDockOffscreenFractionChanged;
- (id)reason;
- (void)setDesiredOffscreenFraction:(double)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (void)setFolderView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
