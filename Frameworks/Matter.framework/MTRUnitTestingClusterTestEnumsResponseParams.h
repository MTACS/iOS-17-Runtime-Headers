
@interface MTRUnitTestingClusterTestEnumsResponseParams : NSObject <NSCopying> {
    NSNumber * _arg1;
    NSNumber * _arg2;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *arg1;
@property (nonatomic, copy) NSNumber *arg2;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x1; unsigned char x2; }*)arg1;
- (id)arg1;
- (id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setArg1:(id)arg1;
- (void)setArg2:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
