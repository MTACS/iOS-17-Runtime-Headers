
@interface STKAlertSession : NSObject <SBSRemoteAlertHandleObserver> {
    STKSessionAction * _alertAction;
    SBSRemoteAlertHandle * _alertHandle;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    bool  _needsResponse;
    NSDictionary * _options;
    <STKAlertSessionResponseProvider> * _responseProvider;
    <STKSound> * _sound;
}

@property (nonatomic, readonly) STKSessionAction *alertAction;
@property (nonatomic, readonly) SBSRemoteAlertHandle *alertHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSentResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, retain) <STKSound> *sound;
@property (readonly) Class superclass;

+ (bool)_requiresResponseProvider;

- (void).cxx_destruct;
- (void)_lock_sendResponse:(long long)arg1;
- (id)alertAction;
- (id)alertHandle;
- (void)dealloc;
- (bool)hasSentResponse;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4;
- (void)invalidate;
- (id)options;
- (void)presentRemoteAlertHandle:(id)arg1 withAction:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
- (void)setSound:(id)arg1;
- (id)sound;

@end
