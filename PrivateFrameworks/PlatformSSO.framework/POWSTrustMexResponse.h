
@interface POWSTrustMexResponse : NSObject {
    NSString * _bindingName;
    NSString * _endpointURLString;
    NSString * _policyName;
    NSString * _portName;
    NSString * _transport;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSString *bindingName;
@property (nonatomic, copy) NSString *endpointURLString;
@property (nonatomic, copy) NSString *policyName;
@property (nonatomic, copy) NSString *portName;
@property (nonatomic, copy) NSString *transport;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)bindingName;
- (id)endpointURLString;
- (id)policyName;
- (id)portName;
- (void)setBindingName:(id)arg1;
- (void)setEndpointURLString:(id)arg1;
- (void)setPolicyName:(id)arg1;
- (void)setPortName:(id)arg1;
- (void)setTransport:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)transport;
- (unsigned long long)version;

@end
