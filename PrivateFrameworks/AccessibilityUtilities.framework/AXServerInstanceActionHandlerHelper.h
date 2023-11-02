
@interface AXServerInstanceActionHandlerHelper : NSObject {
    NSMutableArray * _actionHandlers;
    int  _actionResultMessageKey;
    int  _registrationMessageKey;
}

@property (nonatomic, readonly) int actionResultMessageKey;
@property (nonatomic, readonly) int registrationMessageKey;

- (void).cxx_destruct;
- (bool)_hasActionHandlerForClientPort:(unsigned int)arg1;
- (void)_removeActionHandler:(unsigned int)arg1;
- (int)actionResultMessageKey;
- (id)handleActionHandlerRegistrationMessage:(id)arg1;
- (id)initWithRegistrationMessageKey:(int)arg1 actionResultMessageKey:(int)arg2;
- (void)notifyActionOccurredWithType:(long long)arg1 payload:(id)arg2;
- (int)registrationMessageKey;

@end
