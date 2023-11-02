
@interface CKDPMergeableDeltaReplaceRequest : PBRequest <NSCopying> {
    bool  _containsNewData;
    NSMutableArray * _deltaIdentifiers;
    NSMutableArray * _deltas;
    struct { 
        unsigned int containsNewData : 1; 
        unsigned int ignoreMissingDeltas : 1; 
    }  _has;
    CKDPMergeableValueIdentifier * _identifier;
    bool  _ignoreMissingDeltas;
}

@property (nonatomic) bool containsNewData;
@property (nonatomic, retain) NSMutableArray *deltaIdentifiers;
@property (nonatomic, retain) NSMutableArray *deltas;
@property (nonatomic) bool hasContainsNewData;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIgnoreMissingDeltas;
@property (nonatomic, retain) CKDPMergeableValueIdentifier *identifier;
@property (nonatomic) bool ignoreMissingDeltas;

+ (Class)deltaIdentifiersType;
+ (Class)deltasType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDeltaIdentifiers:(id)arg1;
- (void)addDeltas:(id)arg1;
- (void)clearDeltaIdentifiers;
- (void)clearDeltas;
- (bool)containsNewData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaIdentifiers;
- (id)deltaIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)deltaIdentifiersCount;
- (id)deltas;
- (id)deltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)deltasCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainsNewData;
- (bool)hasIdentifier;
- (bool)hasIgnoreMissingDeltas;
- (unsigned long long)hash;
- (id)identifier;
- (bool)ignoreMissingDeltas;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setContainsNewData:(bool)arg1;
- (void)setDeltaIdentifiers:(id)arg1;
- (void)setDeltas:(id)arg1;
- (void)setHasContainsNewData:(bool)arg1;
- (void)setHasIgnoreMissingDeltas:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIgnoreMissingDeltas:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
