
@interface PKProtobufSubcredentialInvitationMessage : PBCodable <NSCopying> {
    NSString * _dataString;
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSData * _passThumbnailImage;
    NSString * _phoneInvitation;
    int  _status;
    NSString * _uniqueIdentifier;
    unsigned int  _version;
    NSString * _watchInvitation;
}

@property (nonatomic, retain) NSString *dataString;
@property (nonatomic, readonly) bool hasDataString;
@property (nonatomic, readonly) bool hasPassThumbnailImage;
@property (nonatomic, readonly) bool hasPhoneInvitation;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, readonly) bool hasWatchInvitation;
@property (nonatomic, retain) NSData *passThumbnailImage;
@property (nonatomic, retain) NSString *phoneInvitation;
@property (nonatomic) int status;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSString *watchInvitation;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataString;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataString;
- (bool)hasPassThumbnailImage;
- (bool)hasPhoneInvitation;
- (bool)hasStatus;
- (bool)hasUniqueIdentifier;
- (bool)hasWatchInvitation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passThumbnailImage;
- (id)phoneInvitation;
- (bool)readFrom:(id)arg1;
- (void)setDataString:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPhoneInvitation:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWatchInvitation:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)uniqueIdentifier;
- (unsigned int)version;
- (id)watchInvitation;
- (void)writeTo:(id)arg1;

@end
