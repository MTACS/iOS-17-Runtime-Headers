
@interface MRNotification : NSObject {
    NSString * _notification;
    NSDictionary * _userInfo;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (nonatomic, readonly) NSString *notification;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcMessage;

- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1 userInfo:(id)arg2;
- (id)notification;
- (void)setXpcMessage:(id)arg1;
- (id)userInfo;
- (id)xpcMessage;

@end
