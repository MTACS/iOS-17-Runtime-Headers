
@interface AXAuditObjectTransportPropertyEntry : NSObject {
    id /* block */  _localValueToTransportValue;
    id /* block */  _populateLocalObjectWithTransportValue;
    NSString * _transportKey;
}

@property (nonatomic, copy) id /* block */ localValueToTransportValue;
@property (nonatomic, copy) id /* block */ populateLocalObjectWithTransportValue;
@property (nonatomic, retain) NSString *transportKey;

- (void).cxx_destruct;
- (id /* block */)localValueToTransportValue;
- (id /* block */)populateLocalObjectWithTransportValue;
- (void)setLocalValueToTransportValue:(id /* block */)arg1;
- (void)setPopulateLocalObjectWithTransportValue:(id /* block */)arg1;
- (void)setTransportKey:(id)arg1;
- (id)transportKey;

@end
