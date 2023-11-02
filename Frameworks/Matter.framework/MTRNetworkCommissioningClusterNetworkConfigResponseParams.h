
@interface MTRNetworkCommissioningClusterNetworkConfigResponseParams : NSObject <NSCopying> {
    NSString * _debugText;
    NSNumber * _networkIndex;
    NSNumber * _networkingStatus;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSString *debugText;
@property (nonatomic, copy) NSNumber *networkIndex;
@property (nonatomic, copy) NSNumber *networkingStatus;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugText;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)networkIndex;
- (id)networkingStatus;
- (void)setDebugText:(id)arg1;
- (void)setNetworkIndex:(id)arg1;
- (void)setNetworkingStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
