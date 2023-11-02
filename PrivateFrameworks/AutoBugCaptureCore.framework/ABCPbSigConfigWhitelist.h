
@interface ABCPbSigConfigWhitelist : PBCodable <NSCopying> {
    NSString * _build;
    NSString * _buildVariant;
    NSString * _deviceModel;
    int  _globalDecision;
    struct { 
        unsigned int globalDecision : 1; 
    }  _has;
    NSMutableArray * _sigConfigs;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) NSString *buildVariant;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic) int globalDecision;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasBuildVariant;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic) bool hasGlobalDecision;
@property (nonatomic, retain) NSMutableArray *sigConfigs;

+ (Class)sigConfigType;

- (void).cxx_destruct;
- (int)StringAsGlobalDecision:(id)arg1;
- (void)addSigConfig:(id)arg1;
- (id)build;
- (id)buildVariant;
- (void)clearSigConfigs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceModel;
- (id)dictionaryRepresentation;
- (int)globalDecision;
- (id)globalDecisionAsString:(int)arg1;
- (bool)hasBuild;
- (bool)hasBuildVariant;
- (bool)hasDeviceModel;
- (bool)hasGlobalDecision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setBuildVariant:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setGlobalDecision:(int)arg1;
- (void)setHasGlobalDecision:(bool)arg1;
- (void)setSigConfigs:(id)arg1;
- (id)sigConfigAtIndex:(unsigned long long)arg1;
- (id)sigConfigs;
- (unsigned long long)sigConfigsCount;
- (void)writeTo:(id)arg1;

@end
