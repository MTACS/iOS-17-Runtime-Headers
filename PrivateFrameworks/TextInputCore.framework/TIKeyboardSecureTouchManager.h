
@interface TIKeyboardSecureTouchManager : NSObject {
    bool  _bypassCommunication;
    BKSHIDEventAuthenticationMessage * _lastEventAuthenticationMessage;
    unsigned long long  _lastVerifiedMessageTimestamp;
    NSMutableDictionary * _slots;
}

@property (nonatomic) bool bypassCommunication;
@property (nonatomic, retain) BKSHIDEventAuthenticationMessage *lastEventAuthenticationMessage;
@property (nonatomic) unsigned long long lastVerifiedMessageTimestamp;
@property (nonatomic, retain) NSMutableDictionary *slots;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)authenticationMessageContextForSlotID:(unsigned int)arg1;
- (bool)bypassCommunication;
- (void)clearRegistrations;
- (id)init;
- (id)lastEventAuthenticationMessage;
- (unsigned long long)lastVerifiedMessageTimestamp;
- (void)registerSlotID:(unsigned int)arg1;
- (void)setBypassCommunication:(bool)arg1;
- (void)setLastEventAuthenticationMessage:(id)arg1;
- (void)setLastVerifiedMessageTimestamp:(unsigned long long)arg1;
- (void)setSlots:(id)arg1;
- (id)slots;
- (void)touchEventWithAuthenticationMessage:(id)arg1;
- (bool)verifySlotID:(unsigned int)arg1;

@end
