
@interface SFSystemAlert : NSObject {
    NSString * _affirmativeButtonTitle;
    NSString * _alternateButtonTitle;
    struct __CFUserNotification { } * _cfNotification;
    struct __CFRunLoopSource { } * _cfRunloopSource;
    id /* block */  _completionBlock;
    NSString * _message;
    NSString * _negativeButtonTitle;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ completionBlock;

+ (id)_displayNameForBundleID:(id)arg1;
+ (id)readingListAlertForDomain:(id)arg1 appBundleID:(id)arg2;
+ (id)searchEngineSettingAlert;
+ (id)sharedTabGroupsManateeAlert;
+ (id)webAuthenticationAlertForDomain:(id)arg1 appBundleID:(id)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 affirmativeButtonTitle:(id)arg3 negativeButtonTitle:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 affirmativeButtonTitle:(id)arg3 negativeButtonTitle:(id)arg4 alternateButtonTitle:(id)arg5;
- (void)scheduleWithCompletionBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;

@end
