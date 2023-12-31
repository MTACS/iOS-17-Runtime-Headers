
@interface SUAutoInstallFailureNotification : NSObject <SUAutoInstallFailureNotification> {
    struct __CFUserNotification { } * _notification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)dismissNotification;
- (id)init;
- (void)postNotificationForError:(id)arg1;
- (void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2;

@end
