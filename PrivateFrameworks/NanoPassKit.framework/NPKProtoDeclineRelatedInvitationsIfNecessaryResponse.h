
@interface NPKProtoDeclineRelatedInvitationsIfNecessaryResponse : PBCodable <NSCopying> {
    bool  _didDeclineInvitations;
    struct { 
        unsigned int didDeclineInvitations : 1; 
    }  _has;
}

@property (nonatomic) bool didDeclineInvitations;
@property (nonatomic) bool hasDidDeclineInvitations;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didDeclineInvitations;
- (bool)hasDidDeclineInvitations;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDidDeclineInvitations:(bool)arg1;
- (void)setHasDidDeclineInvitations:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
