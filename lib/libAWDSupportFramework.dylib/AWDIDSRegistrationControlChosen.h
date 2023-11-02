
@interface AWDIDSRegistrationControlChosen : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int registrationControlStatus : 1; 
        unsigned int registrationType : 1; 
        unsigned int isInterestingRegion : 1; 
    }  _has;
    bool  _isInterestingRegion;
    int  _registrationControlStatus;
    int  _registrationType;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsInterestingRegion;
@property (nonatomic) bool hasRegistrationControlStatus;
@property (nonatomic) bool hasRegistrationType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isInterestingRegion;
@property (nonatomic) int registrationControlStatus;
@property (nonatomic) int registrationType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsInterestingRegion;
- (bool)hasRegistrationControlStatus;
- (bool)hasRegistrationType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInterestingRegion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)registrationControlStatus;
- (int)registrationType;
- (void)setHasIsInterestingRegion:(bool)arg1;
- (void)setHasRegistrationControlStatus:(bool)arg1;
- (void)setHasRegistrationType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsInterestingRegion:(bool)arg1;
- (void)setRegistrationControlStatus:(int)arg1;
- (void)setRegistrationType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
