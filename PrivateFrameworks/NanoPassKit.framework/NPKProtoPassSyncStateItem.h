
@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying> {
    struct { 
        unsigned int sequenceCounter : 1; 
    }  _has;
    NSMutableArray * _manifestEntrys;
    NSData * _manifestHash;
    NSString * _passTypeIdentifier;
    unsigned int  _sequenceCounter;
    NSString * _serialNumber;
}

@property (nonatomic) bool hasSequenceCounter;
@property (nonatomic, retain) NSMutableArray *manifestEntrys;
@property (nonatomic, retain) NSData *manifestHash;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic) unsigned int sequenceCounter;
@property (nonatomic, retain) NSString *serialNumber;

+ (Class)manifestEntryType;

- (void).cxx_destruct;
- (void)addManifestEntry:(id)arg1;
- (void)clearManifestEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSequenceCounter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manifestEntryAtIndex:(unsigned long long)arg1;
- (id)manifestEntrys;
- (unsigned long long)manifestEntrysCount;
- (id)manifestHash;
- (void)mergeFrom:(id)arg1;
- (id)passTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequenceCounter;
- (id)serialNumber;
- (void)setHasSequenceCounter:(bool)arg1;
- (void)setManifestEntrys:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setSequenceCounter:(unsigned int)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
