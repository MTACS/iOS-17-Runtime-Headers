
@interface _PASXPCListener : NSObject {
    <NSXPCListenerDelegate> * _delegate;
    NSString * _displayName;
    NSString * _serviceName;
}

@property (nonatomic, readonly) <NSXPCListenerDelegate> *delegate;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *serviceName;

- (void).cxx_destruct;
- (id)delegate;
- (id)displayName;
- (id)init;
- (id)initWithDelegate:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3;
- (id)serviceName;

@end
