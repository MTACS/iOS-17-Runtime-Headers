
@interface MTRUnitTestingClusterTestNullableOptionalResponseParams : NSObject <NSCopying> {
    NSNumber * _originalValue;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _value;
    NSNumber * _wasNull;
    NSNumber * _wasPresent;
}

@property (nonatomic, copy) NSNumber *originalValue;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *value;
@property (nonatomic, copy) NSNumber *wasNull;
@property (nonatomic, copy) NSNumber *wasPresent;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)originalValue;
- (void)setOriginalValue:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWasNull:(id)arg1;
- (void)setWasPresent:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)value;
- (id)wasNull;
- (id)wasPresent;

@end
