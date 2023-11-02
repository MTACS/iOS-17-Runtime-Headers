
@interface BMSiriRemembersFieldFieldValueBasicValue : BMEventBase <BMStoreData> {
    bool  _boolValue;
    double  _doubleValue;
    bool  _hasBoolValue;
    bool  _hasDoubleValue;
    bool  _hasInt64Value;
    long long  _int64Value;
    NSString * _stringValue;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasInt64Value;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (bool)boolValue;
- (unsigned int)dataVersion;
- (id)description;
- (double)doubleValue;
- (bool)hasBoolValue;
- (bool)hasDoubleValue;
- (bool)hasInt64Value;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBoolValue:(id)arg1 int64Value:(id)arg2 doubleValue:(id)arg3 stringValue:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasInt64Value:(bool)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
