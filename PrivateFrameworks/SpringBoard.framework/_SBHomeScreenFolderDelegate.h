
@interface _SBHomeScreenFolderDelegate : NSObject {
    long long  _dockStyle;
    <SBFolderControllerDelegate> * _forwardingTarget;
}

@property (nonatomic) long long dockStyle;
@property (nonatomic, retain) <SBFolderControllerDelegate> *forwardingTarget;

- (void).cxx_destruct;
- (id)backgroundViewForDockForRootFolderController:(id)arg1;
- (long long)dockStyle;
- (id)forwardingTarget;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithForwardingTarget:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDockStyle:(long long)arg1;
- (void)setForwardingTarget:(id)arg1;

@end
