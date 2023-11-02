
@interface MTRUnitTestingClusterTestStructArrayArgumentResponseParams : NSObject <NSCopying> {
    NSArray * _arg1;
    NSArray * _arg2;
    NSArray * _arg3;
    NSArray * _arg4;
    NSNumber * _arg5;
    NSNumber * _arg6;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSArray *arg1;
@property (nonatomic, copy) NSArray *arg2;
@property (nonatomic, copy) NSArray *arg3;
@property (nonatomic, copy) NSArray *arg4;
@property (nonatomic, copy) NSNumber *arg5;
@property (nonatomic, copy) NSNumber *arg6;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)arg1;
- (id)arg2;
- (id)arg3;
- (id)arg4;
- (id)arg5;
- (id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setArg1:(id)arg1;
- (void)setArg2:(id)arg1;
- (void)setArg3:(id)arg1;
- (void)setArg4:(id)arg1;
- (void)setArg5:(id)arg1;
- (void)setArg6:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
