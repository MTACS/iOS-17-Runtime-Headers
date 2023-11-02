
@interface IDENTITYSchemaIDENTITYUserPresenceMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int userLocation : 1; 
        unsigned int userLocationSource : 1; 
    }  _has;
    bool  _hasLoggableMultiUserSharedUserId;
    NSString * _loggableMultiUserSharedUserId;
    int  _userLocation;
    int  _userLocationSource;
}

@property (nonatomic) bool hasLoggableMultiUserSharedUserId;
@property (nonatomic) bool hasUserLocation;
@property (nonatomic) bool hasUserLocationSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableMultiUserSharedUserId;
@property (nonatomic) int userLocation;
@property (nonatomic) int userLocationSource;

- (void).cxx_destruct;
- (void)deleteLoggableMultiUserSharedUserId;
- (void)deleteUserLocation;
- (void)deleteUserLocationSource;
- (id)dictionaryRepresentation;
- (bool)hasLoggableMultiUserSharedUserId;
- (bool)hasUserLocation;
- (bool)hasUserLocationSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableMultiUserSharedUserId;
- (bool)readFrom:(id)arg1;
- (void)setHasLoggableMultiUserSharedUserId:(bool)arg1;
- (void)setHasUserLocation:(bool)arg1;
- (void)setHasUserLocationSource:(bool)arg1;
- (void)setLoggableMultiUserSharedUserId:(id)arg1;
- (void)setUserLocation:(int)arg1;
- (void)setUserLocationSource:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userLocation;
- (int)userLocationSource;
- (void)writeTo:(id)arg1;

@end
