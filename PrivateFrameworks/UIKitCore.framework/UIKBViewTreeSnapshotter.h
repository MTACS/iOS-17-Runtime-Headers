
@interface UIKBViewTreeSnapshotter : NSObject {
    NSMutableArray * _inputViews;
    UIView * _snapshotView;
}

@property (nonatomic, readonly) UIView *snapshotView;

+ (id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(bool)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)snapshotView;

@end
