
@interface MPRemoteCommand : NSObject <NSObject> {
    <MPRemoteCommandDelegate_Internal> * _commandCenterDelegate;
    long long  _disabledReason;
    NSArray * _disabledReasons;
    bool  _enabled;
    bool  _forceDisabled;
    NSMutableDictionary * _handlers;
    unsigned int  _mediaRemoteCommandType;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _skipSerializedEventDelivery;
    double  _timeout;
    NSArray * _unsupportedReasons;
}

@property (nonatomic) <MPRemoteCommandDelegate_Internal> *commandCenterDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long disabledReason;
@property (nonatomic, copy) NSArray *disabledReasons;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isForceDisabled, nonatomic) bool forceDisabled;
@property (nonatomic, readonly) bool hasTargets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int mediaRemoteCommandType;
@property (nonatomic) bool skipSerializedEventDelivery;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (getter=isSupportedAndEnabled, nonatomic, readonly) bool supportedAndEnabled;
@property (nonatomic) double timeout;
@property (nonatomic, copy) NSArray *unsupportedReasons;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfo;
- (id)_mediaRemoteCommandInfoOptions;
- (id)_stateDumpObject;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 usingExtendedStatus:(bool)arg3;
- (id)addTargetWithHandler:(id /* block */)arg1;
- (id)commandCenterDelegate;
- (id)commandInfoRepresentations;
- (id)description;
- (long long)disabledReason;
- (id)disabledReasons;
- (bool)hasTargets;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)invokeCommandWithEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)isEnabled;
- (bool)isForceDisabled;
- (bool)isSupported;
- (bool)isSupportedAndEnabled;
- (unsigned int)mediaRemoteCommandType;
- (id)newCommandEvent;
- (id)newCommandEventWithCommandType:(unsigned int)arg1 options:(id)arg2;
- (id)newCommandEventWithContentItemIdentifier:(id)arg1;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)arg1;
- (id)newSeekCommandEventWithType:(unsigned long long)arg1;
- (void)notifyPropagatablePropertyChanged;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setCommandCenterDelegate:(id)arg1;
- (void)setDisabledReason:(long long)arg1;
- (void)setDisabledReasons:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setForceDisabled:(bool)arg1;
- (void)setSkipSerializedEventDelivery:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUnsupportedReasons:(id)arg1;
- (bool)skipSerializedEventDelivery;
- (double)timeout;
- (id)unsupportedReasons;

@end
