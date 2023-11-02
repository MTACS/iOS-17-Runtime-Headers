
@interface IMMessageContext : NSObject {
    bool  _boost;
    id  _context;
    IMLocalObject * _localObject;
    bool  _needReply;
    bool  _reply;
    bool  _shouldBoost;
    bool  _sync;
    NSObject<OS_voucher> * _voucher;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (retain) id context;
@property (retain) IMLocalObject *localObject;
@property (nonatomic) bool needReply;
@property (nonatomic) bool reply;
@property bool shouldBoost;
@property (nonatomic) bool sync;
@property (retain) NSObject<OS_voucher> *voucher;
@property (retain) NSObject<OS_xpc_object> *xpcMessage;

- (void).cxx_destruct;
- (id)context;
- (id)init;
- (bool)isReply;
- (bool)isSync;
- (id)localObject;
- (bool)needReply;
- (bool)reply;
- (void)setContext:(id)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setNeedReply:(bool)arg1;
- (void)setReply:(bool)arg1;
- (void)setShouldBoost:(bool)arg1;
- (void)setSync:(bool)arg1;
- (void)setVoucher:(id)arg1;
- (void)setXpcMessage:(id)arg1;
- (bool)shouldBoost;
- (bool)sync;
- (id)voucher;
- (id)xpcMessage;

@end
