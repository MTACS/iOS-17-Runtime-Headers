
@interface HMDBiomeEventManager : HMFObject {
    BMHomeKitClientActionSetStream * _actionSetStream;
    BMHomeKitClientAccessoryControlStream * _hapAccessoryStream;
    BMHomeKitClientMediaAccessoryControlStream * _mediaAccessoryStream;
    NSNotificationCenter * _notificationCenter;
    id /* block */  _prunableStreamFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) BMHomeKitClientActionSetStream *actionSetStream;
@property (readonly) BMHomeKitClientAccessoryControlStream *hapAccessoryStream;
@property (readonly) BMHomeKitClientMediaAccessoryControlStream *mediaAccessoryStream;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id /* block */ prunableStreamFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleActionSetEmptiedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleServiceRemovedNotification:(id)arg1;
- (void)_submitAccessoryEvent:(id)arg1;
- (void)_submitActionSetEvent:(id)arg1;
- (void)_submitMediaAccessoryEvent:(id)arg1;
- (id)actionSetStream;
- (void)deleteAllEvents;
- (void)fetchMostRecentEventWithCharacteristicType:(id)arg1 serviceType:(id)arg2 homeSPIClientIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)hapAccessoryStream;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 actionSetStream:(id)arg2 mediaAccessoryStream:(id)arg3 accessoryStream:(id)arg4 prunableStreamFactory:(id /* block */)arg5 workQueue:(id)arg6;
- (id)mediaAccessoryStream;
- (id)notificationCenter;
- (id /* block */)prunableStreamFactory;
- (void)submitAccessoryEvent:(id)arg1;
- (void)submitActionSetEvent:(id)arg1;
- (void)submitMediaAccessoryEvent:(id)arg1;
- (id)workQueue;

@end
