
@interface CKDPRecordMoveRequest : PBRequest <NSCopying> {
    NSString * _destinationEtag;
    CKDPRecord * _destinationRecord;
    NSString * _destinationRecordProtectionInfoTag;
    NSString * _destinationZoneProtectionInfoTag;
    struct { 
        unsigned int semantics : 1; 
        unsigned int merge : 1; 
    }  _has;
    bool  _merge;
    NSString * _originEtag;
    CKDPRecordIdentifier * _originId;
    int  _semantics;
}

@property (nonatomic, retain) NSString *destinationEtag;
@property (nonatomic, retain) CKDPRecord *destinationRecord;
@property (nonatomic, retain) NSString *destinationRecordProtectionInfoTag;
@property (nonatomic, retain) NSString *destinationZoneProtectionInfoTag;
@property (nonatomic, readonly) bool hasDestinationEtag;
@property (nonatomic, readonly) bool hasDestinationRecord;
@property (nonatomic, readonly) bool hasDestinationRecordProtectionInfoTag;
@property (nonatomic, readonly) bool hasDestinationZoneProtectionInfoTag;
@property (nonatomic) bool hasMerge;
@property (nonatomic, readonly) bool hasOriginEtag;
@property (nonatomic, readonly) bool hasOriginId;
@property (nonatomic) bool hasSemantics;
@property (nonatomic) bool merge;
@property (nonatomic, retain) NSString *originEtag;
@property (nonatomic, retain) CKDPRecordIdentifier *originId;
@property (nonatomic) int semantics;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsSemantics:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationEtag;
- (id)destinationRecord;
- (id)destinationRecordProtectionInfoTag;
- (id)destinationZoneProtectionInfoTag;
- (id)dictionaryRepresentation;
- (bool)hasDestinationEtag;
- (bool)hasDestinationRecord;
- (bool)hasDestinationRecordProtectionInfoTag;
- (bool)hasDestinationZoneProtectionInfoTag;
- (bool)hasMerge;
- (bool)hasOriginEtag;
- (bool)hasOriginId;
- (bool)hasSemantics;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)merge;
- (void)mergeFrom:(id)arg1;
- (id)originEtag;
- (id)originId;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)semantics;
- (id)semanticsAsString:(int)arg1;
- (void)setDestinationEtag:(id)arg1;
- (void)setDestinationRecord:(id)arg1;
- (void)setDestinationRecordProtectionInfoTag:(id)arg1;
- (void)setDestinationZoneProtectionInfoTag:(id)arg1;
- (void)setHasMerge:(bool)arg1;
- (void)setHasSemantics:(bool)arg1;
- (void)setMerge:(bool)arg1;
- (void)setOriginEtag:(id)arg1;
- (void)setOriginId:(id)arg1;
- (void)setSemantics:(int)arg1;
- (void)writeTo:(id)arg1;

@end
