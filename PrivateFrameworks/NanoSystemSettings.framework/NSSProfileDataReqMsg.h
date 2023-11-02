
@interface NSSProfileDataReqMsg : PBCodable <NSCopying> {
    struct { 
        unsigned int includeManagedPayloads : 1; 
    }  _has;
    NSString * _identifier;
    bool  _includeManagedPayloads;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIncludeManagedPayloads;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool includeManagedPayloads;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasIncludeManagedPayloads;
- (unsigned long long)hash;
- (id)identifier;
- (bool)includeManagedPayloads;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeManagedPayloads:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIncludeManagedPayloads:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
