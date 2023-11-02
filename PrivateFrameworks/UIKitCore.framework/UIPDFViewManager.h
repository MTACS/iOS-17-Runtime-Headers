
@interface UIPDFViewManager : NSObject {
    UIView * _activeView;
}

+ (id)sharedViewManager;

- (void)makeViewActive:(id)arg1;
- (void)viewReleased:(id)arg1;

@end
