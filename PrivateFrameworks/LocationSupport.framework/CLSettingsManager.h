
@interface CLSettingsManager : CLSettingsManagerInternal <CLSettingsManagerProtocol> {
    id  _notificationObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id notificationObserver;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

- (void)beginService;
- (void)endService;
- (id)init;
- (id)notificationObserver;
- (void)refresh;
- (void)setNotificationObserver:(id)arg1;
- (id)syncgetSetValue:(void *)arg1 forKey:(void *)arg2 withoutNotifying:(void *)arg3; // needs 3 arg types, found 4: id, id, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id

@end
