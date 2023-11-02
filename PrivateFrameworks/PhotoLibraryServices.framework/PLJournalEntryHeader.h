
@interface PLJournalEntryHeader : PBCodable <NSCopying> {
    int  _entryType;
    struct { 
        unsigned int payloadLength : 1; 
        unsigned int entryType : 1; 
        unsigned int payloadCRC : 1; 
        unsigned int payloadVersion : 1; 
    }  _has;
    NSMutableArray * _nilProperties;
    unsigned int  _payloadCRC;
    NSString * _payloadID;
    unsigned long long  _payloadLength;
    NSData * _payloadUUID;
    unsigned int  _payloadVersion;
}

@property (nonatomic) int entryType;
@property (nonatomic) bool hasEntryType;
@property (nonatomic) bool hasPayloadCRC;
@property (nonatomic, readonly) bool hasPayloadID;
@property (nonatomic) bool hasPayloadLength;
@property (nonatomic, readonly) bool hasPayloadUUID;
@property (nonatomic) bool hasPayloadVersion;
@property (nonatomic, retain) NSMutableArray *nilProperties;
@property (nonatomic) unsigned int payloadCRC;
@property (nonatomic, retain) NSString *payloadID;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic, retain) NSData *payloadUUID;
@property (nonatomic) unsigned int payloadVersion;

+ (Class)nilPropertiesType;

- (void).cxx_destruct;
- (int)StringAsEntryType:(id)arg1;
- (void)addNilProperties:(id)arg1;
- (void)clearNilProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entryType;
- (id)entryTypeAsString:(int)arg1;
- (bool)hasEntryType;
- (bool)hasPayloadCRC;
- (bool)hasPayloadID;
- (bool)hasPayloadLength;
- (bool)hasPayloadUUID;
- (bool)hasPayloadVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nilProperties;
- (id)nilPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)nilPropertiesCount;
- (unsigned int)payloadCRC;
- (id)payloadID;
- (unsigned long long)payloadLength;
- (id)payloadUUID;
- (unsigned int)payloadVersion;
- (bool)readFrom:(id)arg1;
- (void)setEntryType:(int)arg1;
- (void)setHasEntryType:(bool)arg1;
- (void)setHasPayloadCRC:(bool)arg1;
- (void)setHasPayloadLength:(bool)arg1;
- (void)setHasPayloadVersion:(bool)arg1;
- (void)setNilProperties:(id)arg1;
- (void)setPayloadCRC:(unsigned int)arg1;
- (void)setPayloadID:(id)arg1;
- (void)setPayloadLength:(unsigned long long)arg1;
- (void)setPayloadUUID:(id)arg1;
- (void)setPayloadVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
