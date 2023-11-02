
@interface MTROperationalCredentialsClusterNOCResponseParams : NSObject <NSCopying> {
    NSString * _debugText;
    NSNumber * _fabricIndex;
    NSNumber * _statusCode;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSString *debugText;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *statusCode;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugText;
- (id)description;
- (id)fabricIndex;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setDebugText:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)statusCode;
- (id)timedInvokeTimeoutMs;

@end
