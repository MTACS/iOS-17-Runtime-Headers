
@interface MTRGroupKeyManagementClusterKeySetReadResponseParams : NSObject <NSCopying> {
    MTRGroupKeyManagementClusterGroupKeySetStruct * _groupKeySet;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupKeySet;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setGroupKeySet:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
