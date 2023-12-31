
@interface CRDictionaryElement : NSObject {
    CRVectorTimestamp * _timestamp;
    <CRDataType> * _value;
}

@property (nonatomic, retain) CRVectorTimestamp *timestamp;
@property (nonatomic, retain) <CRDataType> *value;

+ (id)temporaryElementWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setValue:(id)arg1;
- (id)timestamp;
- (id)value;

@end
