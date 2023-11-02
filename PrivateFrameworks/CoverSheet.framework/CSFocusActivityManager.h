
@interface CSFocusActivityManager : NSObject <CSFocusActivityViewControllerDelegate, FCActivityManagerObserving> {
    FCActivityManager * _activityManager;
    NSObject<OS_dispatch_queue> * _activityManagerQueue;
    <FCActivityDescribing> * _currentActivity;
    <CSFocusActivityDelegate> * _delegate;
    CSAdjunctListItem * _focusActivityItem;
    CSFocusActivityViewController * _focusActivityViewController;
    <CSItemDestination> * _itemDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSFocusActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFocusActivityIndicatorVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityForDisplayInIndicator;
- (void)_addOrUpdateFocusActivityIndicatorItemIfNecessary;
- (void)_updateFocusActivityIndicator;
- (void)activeActivityDidChangeForManager:(id)arg1;
- (void)availableActivitiesDidChangeForManager:(id)arg1;
- (id)delegate;
- (void)focusActivityViewIndicatorDidChangeToVisible:(bool)arg1;
- (id)initWithItemDestination:(id)arg1;
- (bool)isFocusActivityIndicatorVisible;
- (void)presentFocusActivityPickerViewControllerFromView:(id)arg1 coverSheetViewPresenting:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
