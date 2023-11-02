
@interface MSVSystemDialogManager : NSObject {
    struct __CFDictionary { } * _registeredSystemDialogs;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification { }*)arg2;
- (id)systemDialogForUserNotification:(struct __CFUserNotification { }*)arg1;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification { }*)arg1;

@end
