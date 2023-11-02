
@interface AUParameterTree : AUParameterGroup <NSSecureCoding> {
    AUAudioUnit_XH * __auXH;
    int  __autoCreatedForV2AU;
    struct vector<AddressToParameter, std::allocator<AddressToParameter>> { 
        struct AddressToParameter {} *__begin_; 
        struct AddressToParameter {} *__end_; 
        struct __compressed_pair<AddressToParameter *, std::allocator<AddressToParameter>> { 
            struct AddressToParameter {} *__value_; 
        } __end_cap_; 
    }  _addrToParamIndex;
    int  _numRecorders;
    NSObject<OS_dispatch_queue> * _observationQueue;
    struct shared_ptr<AUObserverController> { 
        struct AUObserverController {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _observerController;
    struct AURemoteParameterObserver { } * _remoteObserverToken;
    NSXPCConnection * _remoteParameterSynchronizerXPCConnection;
    struct AURemoteParameterObserver { } * _remoteRecorderToken;
    NSObject<OS_dispatch_queue> * _valueAccessQueue;
}

@property (nonatomic) AUAudioUnit_XH *_auXH;
@property (nonatomic) int _autoCreatedForV2AU;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<AddressToParameter' */ struct  addrToParamIndex; /* unknown property attribute:  std::allocator<AddressToParameter>>=^{AddressToParameter}}} */
@property (nonatomic) int numRecorders;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observationQueue;
@property (nonatomic) struct AURemoteParameterObserver { }*remoteObserverToken;
@property (nonatomic) NSXPCConnection *remoteParameterSynchronizerXPCConnection;
@property (nonatomic) struct AURemoteParameterObserver { }*remoteRecorderToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *valueAccessQueue;

+ (id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
+ (id)createGroupTemplate:(id)arg1;
+ (id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3;
+ (id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
+ (id)createTreeWithChildren:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_auXH;
- (int)_autoCreatedForV2AU;
- (void)_checkInitTreeObservation;
- (void)_init2;
- (struct vector<AddressToParameter, std::allocator<AddressToParameter>> { struct AddressToParameter {} *x1; struct AddressToParameter {} *x2; struct __compressed_pair<AddressToParameter *, std::allocator<AddressToParameter>> { struct AddressToParameter {} *x_3_1_1; } x3; })addrToParamIndex;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)numRecorders;
- (id)observationQueue;
- (void*)observerController;
- (id)parameterWithAddress:(unsigned long long)arg1;
- (id)parameterWithID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (struct AURemoteParameterObserver { }*)remoteObserverToken;
- (id)remoteParameterSynchronizerXPCConnection;
- (struct AURemoteParameterObserver { }*)remoteRecorderToken;
- (void)remoteSyncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)setAddrToParamIndex:(struct vector<AddressToParameter, std::allocator<AddressToParameter>> { struct AddressToParameter {} *x1; struct AddressToParameter {} *x2; struct __compressed_pair<AddressToParameter *, std::allocator<AddressToParameter>> { struct AddressToParameter {} *x_3_1_1; } x3; })arg1;
- (void)setNumRecorders:(int)arg1;
- (void)setRemoteObserverToken:(struct AURemoteParameterObserver { }*)arg1;
- (void)setRemoteParameterSynchronizerXPCConnection:(id)arg1;
- (void)setRemoteRecorderToken:(struct AURemoteParameterObserver { }*)arg1;
- (void)set_auXH:(id)arg1;
- (void)set_autoCreatedForV2AU:(int)arg1;
- (id)valueAccessQueue;

@end
