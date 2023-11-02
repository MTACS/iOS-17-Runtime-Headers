
@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken> {
    id /* block */  _changeHandler;
    NSNotificationCenter * _notificationCenter;
    NSString * _recordID;
}

@property (nonatomic, readonly, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)handleNotification:(id)arg1;
- (id)initWithEnvironment:(id)arg1 recordIdentifier:(id)arg2 changeHandler:(id /* block */)arg3;
- (id)notificationCenter;
- (id)recordID;
- (void)startObservingChanges;
- (void)stopObservingChanges;

@end
