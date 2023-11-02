
@interface CKUtilities : NSObject

+ (double)_daysSinceDate:(id)arg1;
+ (double)_intervalSinceDate:(id)arg1;
+ (unsigned long long)daysUntilJunkFilterDeletionForDate:(id)arg1;
+ (unsigned long long)daysUntilRecentlyDeletedDeletionForDate:(id)arg1;
+ (bool)deviceHasMultipleSubscriptions;
+ (id)deviceSpecificNameForKey:(id)arg1;
+ (id)imDefaultsSharedInstance;
+ (id)imMessageForIMMessageItem:(id)arg1;
+ (unsigned long long)indexOfChatItem:(id)arg1 inChatItemsArray:(id)arg2;
+ (bool)isIpad;
+ (bool)isMessagePromotionsNotificationDisabled;
+ (bool)isMessageTransactionsNotificationDisabled;
+ (bool)isMessageUnknownSenderNotificationDisabled;
+ (unsigned long long)messageJunkStatus;
+ (id)nsUserDefaultsStandardUserDefaults;
+ (void)onboardRecentlyDeletedIfNeeded:(id)arg1 actionHandler:(id /* block */)arg2;
+ (id)quickSaveConfirmationAlertForMediaObjects:(id)arg1 momentShareURL:(id)arg2 popoverSource:(id)arg3 metricsSource:(id)arg4 cancelHandler:(id /* block */)arg5 preSaveHandler:(id /* block */)arg6 postSaveHandler:(id /* block */)arg7;
+ (id)quickSaveConfirmationAlertForMediaObjects:(id)arg1 momentShareURL:(id)arg2 popoverSource:(id)arg3 metricsSource:(id)arg4 cancelHandler:(id /* block */)arg5 preSaveHandler:(id /* block */)arg6 postSaveHandler:(id /* block */)arg7 postAnyActionHandler:(id /* block */)arg8;
+ (id)quickSaveConfirmationAlertWithPhotoCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 otherCount:(unsigned long long)arg3 alreadySavedCount:(unsigned long long)arg4 popoverSource:(id)arg5 cancelHandler:(id /* block */)arg6 saveHandler:(id /* block */)arg7 navigationHandler:(id /* block */)arg8;
+ (id)threadIdentifierForMessagePart:(id)arg1;
+ (id)threadOriginatorForMessagePart:(id)arg1;
+ (bool)userDefaultBoolForKey:(id)arg1;

@end
