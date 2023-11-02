
@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    NSString * _etag;
    struct { 
        unsigned int participantKeyLost : 1; 
    }  _has;
    bool  _participantKeyLost;
    NSMutableArray * _pluginFields;
    NSMutableArray * _publicKeys;
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic) bool hasParticipantKeyLost;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic) bool participantKeyLost;
@property (nonatomic, retain) NSMutableArray *pluginFields;
@property (nonatomic, retain) NSMutableArray *publicKeys;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;

+ (id)options;
+ (Class)pluginFieldsType;
+ (Class)publicKeysType;

- (void).cxx_destruct;
- (void)addPluginFields:(id)arg1;
- (void)addPublicKeys:(id)arg1;
- (void)clearPluginFields;
- (void)clearPublicKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasParticipantKeyLost;
- (bool)hasRecordIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)participantKeyLost;
- (id)pluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (id)publicKeys;
- (id)publicKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)publicKeysCount;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEtag:(id)arg1;
- (void)setHasParticipantKeyLost:(bool)arg1;
- (void)setParticipantKeyLost:(bool)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setPublicKeys:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
