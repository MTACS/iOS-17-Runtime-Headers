
@interface WFShortcutsSecuritySettings : NSObject

+ (bool)allowsDeletingLargeAmountsOfData;
+ (bool)allowsDeletingWithoutConfirmation;
+ (bool)allowsSharingLargeAmountsOfData;
+ (bool)areScriptingActionsEnabled;
+ (id)scripingActionDisabledErrorWithActionName:(id)arg1;

@end
