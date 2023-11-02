
@interface MTRGroupKeyManagementClusterKeySetReadAllIndicesResponseParams : NSObject <NSCopying> {
    NSArray * _groupKeySetIDs;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSArray *groupKeySetIDs;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupKeySetIDs;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setGroupKeySetIDs:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
