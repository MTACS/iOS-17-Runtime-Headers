
@interface BLTPBContact : PBCodable <NSCopying> {
    NSString * _cnContactFullname;
    NSString * _cnContactIdentifier;
    bool  _cnContactIdentifierSuggested;
    NSString * _customIdentifier;
    NSString * _displayName;
    bool  _displayNameSuggested;
    NSString * _handle;
    unsigned int  _handleType;
    struct { 
        unsigned int displayNameSuggested : 1; 
    }  _has;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *cnContactFullname;
@property (nonatomic, retain) NSString *cnContactIdentifier;
@property (nonatomic) bool cnContactIdentifierSuggested;
@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool displayNameSuggested;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic) unsigned int handleType;
@property (nonatomic, readonly) bool hasCnContactFullname;
@property (nonatomic, readonly) bool hasCnContactIdentifier;
@property (nonatomic, readonly) bool hasCustomIdentifier;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasDisplayNameSuggested;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (id)cnContactFullname;
- (id)cnContactIdentifier;
- (bool)cnContactIdentifierSuggested;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)displayNameSuggested;
- (id)handle;
- (unsigned int)handleType;
- (bool)hasCnContactFullname;
- (bool)hasCnContactIdentifier;
- (bool)hasCustomIdentifier;
- (bool)hasDisplayName;
- (bool)hasDisplayNameSuggested;
- (bool)hasHandle;
- (bool)hasServiceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceName;
- (void)setCnContactFullname:(id)arg1;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setCnContactIdentifierSuggested:(bool)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameSuggested:(bool)arg1;
- (void)setHandle:(id)arg1;
- (void)setHandleType:(unsigned int)arg1;
- (void)setHasDisplayNameSuggested:(bool)arg1;
- (void)setServiceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
