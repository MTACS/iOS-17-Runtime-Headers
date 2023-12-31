
@interface TVRMSAvailableServicesDidUpdateMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    NSMutableArray * _services;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic, retain) NSMutableArray *services;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (void)addServices:(id)arg1;
- (void)clearServices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)services;
- (id)servicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)servicesCount;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setServices:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
