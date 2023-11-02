
@interface TIKeyboardSecureTouchSlot : NSObject {
    unsigned long long  _authenticationMessageContext;
    <BSInvalidatable> * _invalidatable;
    unsigned int  _slotID;
}

@property (nonatomic) unsigned long long authenticationMessageContext;
@property (nonatomic, retain) <BSInvalidatable> *invalidatable;
@property (nonatomic) unsigned int slotID;

- (void).cxx_destruct;
- (unsigned long long)authenticationMessageContext;
- (void)dealloc;
- (id)invalidatable;
- (void)setAuthenticationMessageContext:(unsigned long long)arg1;
- (void)setInvalidatable:(id)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (unsigned int)slotID;

@end
