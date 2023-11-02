
@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying> {
    NSString * _dataString;
    struct { 
        unsigned int isPassInLibrary : 1; 
    }  _has;
    bool  _isPassInLibrary;
    NSString * _messageCaption;
    NSData * _passThumbnailImage;
    NSString * _policyIdentifier;
    NSMutableArray * _shareableCredentials;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *dataString;
@property (nonatomic, readonly) bool hasDataString;
@property (nonatomic) bool hasIsPassInLibrary;
@property (nonatomic, readonly) bool hasMessageCaption;
@property (nonatomic, readonly) bool hasPassThumbnailImage;
@property (nonatomic, readonly) bool hasPolicyIdentifier;
@property (nonatomic) bool isPassInLibrary;
@property (nonatomic, retain) NSString *messageCaption;
@property (nonatomic, retain) NSData *passThumbnailImage;
@property (nonatomic, retain) NSString *policyIdentifier;
@property (nonatomic, retain) NSMutableArray *shareableCredentials;
@property (nonatomic) unsigned int version;

+ (Class)shareableCredentialsType;

- (void).cxx_destruct;
- (void)addShareableCredentials:(id)arg1;
- (void)clearShareableCredentials;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataString;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataString;
- (bool)hasIsPassInLibrary;
- (bool)hasMessageCaption;
- (bool)hasPassThumbnailImage;
- (bool)hasPolicyIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPassInLibrary;
- (void)mergeFrom:(id)arg1;
- (id)messageCaption;
- (id)passThumbnailImage;
- (id)policyIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setDataString:(id)arg1;
- (void)setHasIsPassInLibrary:(bool)arg1;
- (void)setIsPassInLibrary:(bool)arg1;
- (void)setMessageCaption:(id)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPolicyIdentifier:(id)arg1;
- (void)setShareableCredentials:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)shareableCredentials;
- (id)shareableCredentialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shareableCredentialsCount;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
