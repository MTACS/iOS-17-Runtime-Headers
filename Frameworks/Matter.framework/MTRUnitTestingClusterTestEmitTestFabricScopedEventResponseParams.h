
@interface MTRUnitTestingClusterTestEmitTestFabricScopedEventResponseParams : NSObject <NSCopying> {
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _value;
}

@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *value;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned long long x1; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setValue:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)value;

@end
