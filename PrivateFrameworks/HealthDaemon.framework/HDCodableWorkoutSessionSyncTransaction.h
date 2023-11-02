
@interface HDCodableWorkoutSessionSyncTransaction : PBCodable <NSCopying> {
    NSData * _arbitraryData;
    HDCodableWorkoutSessionConfiguration * _configuration;
    HDCodableWorkoutSessionGlobalState * _globalState;
    NSData * _sessionUUID;
}

@property (nonatomic, retain) NSData *arbitraryData;
@property (nonatomic, retain) HDCodableWorkoutSessionConfiguration *configuration;
@property (nonatomic, retain) HDCodableWorkoutSessionGlobalState *globalState;
@property (nonatomic, readonly) bool hasArbitraryData;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool hasGlobalState;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic, retain) NSData *sessionUUID;

- (void).cxx_destruct;
- (id)arbitraryData;
- (id)configuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalState;
- (bool)hasArbitraryData;
- (bool)hasConfiguration;
- (bool)hasGlobalState;
- (bool)hasSessionUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setArbitraryData:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setGlobalState:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
