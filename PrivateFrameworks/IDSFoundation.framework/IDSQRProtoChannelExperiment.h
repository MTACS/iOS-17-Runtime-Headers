
@interface IDSQRProtoChannelExperiment : PBCodable <NSCopying> {
    bool  _boolValue;
    NSString * _experimentName;
    struct { 
        unsigned int int32Value : 1; 
        unsigned int testValue : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    int  _int32Value;
    NSString * _stringValue;
    int  _testValue;
}

@property (nonatomic) bool boolValue;
@property (nonatomic, retain) NSString *experimentName;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic) bool hasInt32Value;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasTestValue;
@property (nonatomic) int int32Value;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int testValue;

- (void).cxx_destruct;
- (int)StringAsTestValue:(id)arg1;
- (bool)boolValue;
- (void)clearOneofValuesForTestValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentName;
- (bool)hasBoolValue;
- (bool)hasInt32Value;
- (bool)hasStringValue;
- (bool)hasTestValue;
- (unsigned long long)hash;
- (int)int32Value;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setExperimentName:(id)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasInt32Value:(bool)arg1;
- (void)setHasTestValue:(bool)arg1;
- (void)setInt32Value:(int)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTestValue:(int)arg1;
- (id)stringValue;
- (int)testValue;
- (id)testValueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
