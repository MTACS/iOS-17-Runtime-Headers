
@interface BMIntelligencePlatformFeatureStoreFeatureValueBasicValue : BMEventBase <BMStoreData> {
    double  _double_value;
    double  _float_value;
    bool  _hasDouble_value;
    bool  _hasFloat_value;
    bool  _hasInt_value;
    long long  _int_value;
    NSString * _string_value;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double double_value;
@property (nonatomic, readonly) double float_value;
@property (nonatomic) bool hasDouble_value;
@property (nonatomic) bool hasFloat_value;
@property (nonatomic) bool hasInt_value;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long int_value;
@property (nonatomic, readonly) NSString *string_value;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (double)double_value;
- (double)float_value;
- (bool)hasDouble_value;
- (bool)hasFloat_value;
- (bool)hasInt_value;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInt_value:(id)arg1 double_value:(id)arg2 float_value:(id)arg3 string_value:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (long long)int_value;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasDouble_value:(bool)arg1;
- (void)setHasFloat_value:(bool)arg1;
- (void)setHasInt_value:(bool)arg1;
- (id)string_value;
- (void)writeTo:(id)arg1;

@end
