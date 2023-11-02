
@interface NFSecureTransactionServicesHandoverBaseSessionCallbacksInterface : NSObject {
    NSXPCInterface * _protocolInterface;
}

@property (nonatomic, readonly) NSXPCInterface *protocolInterface;

+ (id)interface;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)arg1;
- (id)protocolInterface;
- (void)setupInterface;

@end
