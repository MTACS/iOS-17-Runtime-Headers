
@interface HDBackgroundObservationServerExtension : NSObject {
    NSString * _appIdentifier;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSExtension * _extension;
    _HKBackgroundObservationExtensionRemoteContext * _extensionContext;
    _HKBackgroundObservationExtensionHostContext * _extensionHostContext;
    NSString * _extensionIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _sessionUUID;
    bool  _unitTest_notifiedExtensionDueToTimeout;
}

@property (nonatomic, readonly, copy) NSString *appIdentifier;
@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic) bool unitTest_notifiedExtensionDueToTimeout;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1;
- (id)appIdentifier;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)disconnect;
- (id)extensionIdentifier;
- (id)init;
- (void)notifyExtensionOfUpcomingTimeout;
- (void)notifyExtensionOfUpdateForSampleType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setUnitTest_notifiedExtensionDueToTimeout:(bool)arg1;
- (id)unitTest_extensionContext;
- (id)unitTest_extensionHostContext;
- (bool)unitTest_notifiedExtensionDueToTimeout;
- (id)unitTest_queue;
- (id)unitTest_sessionUUID;

@end
