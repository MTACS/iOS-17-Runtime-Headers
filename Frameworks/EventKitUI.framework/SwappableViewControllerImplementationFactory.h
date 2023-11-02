
@interface SwappableViewControllerImplementationFactory : NSObject

+ (id)calendarChooserImplWithRemoteUI:(bool)arg1 selectionStyle:(long long)arg2 displayStyle:(long long)arg3 entityType:(unsigned long long)arg4 forEvent:(id)arg5 eventStore:(id)arg6 limitedToSource:(id)arg7 showIdentityChooser:(bool)arg8 showDelegateSetupCell:(bool)arg9 showAccountStatus:(bool)arg10;
+ (id)calendarChooserImplWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 forEvent:(id)arg4 eventStore:(id)arg5 limitedToSource:(id)arg6 showIdentityChooser:(bool)arg7 showDelegateSetupCell:(bool)arg8 showAccountStatus:(bool)arg9;
+ (id)eventEditViewControllerImpl;
+ (id)eventEditViewControllerImplWithRemoteUI:(bool)arg1;
+ (id)eventViewControllerImpl;
+ (id)eventViewControllerImplWithRemoteUI:(bool)arg1;
+ (id)proposedTimeEventViewControllerImpl;
+ (bool)shouldUseOutOfProcessUI;

@end
