
@interface MIDICIResponder : NSObject {
    MIDICIDeviceInfo * _deviceInfo;
    struct shared_ptr<LocalCIResponder> { 
        struct LocalCIResponder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _impl;
    bool  _isStarted;
    unsigned int  _midiDestination;
    <MIDICIProfileResponderDelegate> * _profileDelegate;
    NSMutableArray * _profileStates;
    bool  _propertiesSupported;
    <MIDICIPropertyResponderDelegate> * _propertyDelegate;
    unsigned int  _serverResponderRef;
    NSMutableArray * _subscribers;
    NSArray * initiators;
}

@property (nonatomic, readonly) MIDICIDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSArray *initiators;
@property (nonatomic, readonly, retain) <MIDICIProfileResponderDelegate> *profileDelegate;
@property (nonatomic, retain) <MIDICIPropertyResponderDelegate> *propertyDelegate;

+ (id)description;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsValidChannels:(id)arg1;
- (id)description;
- (id)deviceInfo;
- (id)getInitiators;
- (id)init;
- (id)initWithDeviceInfo:(id)arg1 profileDelegate:(id)arg2 profileStates:(id)arg3 supportProperties:(bool)arg4;
- (id)initiators;
- (bool)notifyProfile:(id)arg1 onChannel:(unsigned char)arg2 isEnabled:(bool)arg3;
- (bool)notifyProperty:(id)arg1 onChannel:(unsigned char)arg2 forSubscribers:(id)arg3;
- (id)profileDelegate;
- (id)propertyDelegate;
- (void)registerProfiles:(id)arg1;
- (bool)sendProfile:(id)arg1 onChannel:(unsigned char)arg2 profileData:(id)arg3;
- (void)setPropertyDelegate:(id)arg1;
- (bool)start;
- (void)stop;

@end
