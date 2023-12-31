
@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    bool  _currentlyGatheringLogs;
    bool  _isInternalInstall;
    bool  _radarItemEnabled;
}

- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (bool)_showRadarButtonForInternalInstalls;
- (id)_timeImageSet;
- (bool)allowsUserInteraction;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (id)contentsImage;
- (void)dealloc;
- (id)highlightImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsTouchWhenHighlighted;
- (bool)usesAdvancedActions;

@end
