
@protocol SBIconViewDelegate <SBIconViewActionDelegate, SBIconViewBehaviorDelegate, SBIconViewReuseDelegate, SBIconViewDragDelegate, SBIconViewDropDelegate, SBIconViewShortcutsDelegate, SBIconViewConfigurationUIDelegate, NSObject>

@optional

- (<SBIconViewActionDelegate> *)actionDelegateForIconView:(SBIconView *)arg1;
- (<SBIconViewBehaviorDelegate> *)behaviorDelegateForIconView:(SBIconView *)arg1;
- (<SBIconViewConfigurationUIDelegate> *)configurationUIDelegateForIconView:(SBIconView *)arg1;
- (<SBIconViewDragDelegate> *)draggingDelegateForIconView:(SBIconView *)arg1;
- (<SBIconViewDropDelegate> *)droppingDelegateForIconView:(SBIconView *)arg1;
- (<SBIconViewReuseDelegate> *)reuseDelegateForIconView:(SBIconView *)arg1;
- (<SBIconViewShortcutsDelegate> *)shortcutsDelegateForIconView:(SBIconView *)arg1;

@end
