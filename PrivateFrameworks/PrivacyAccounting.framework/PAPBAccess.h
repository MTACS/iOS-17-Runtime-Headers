
@interface PAPBAccess : PBCodable <NSCopying> {
    PAPBApplication * _accessor;
    NSMutableArray * _assetIdentifiers;
    struct { 
        unsigned int timestampAdjustment : 1; 
        unsigned int kind : 1; 
    }  _has;
    NSData * _identifier;
    int  _kind;
    double  _timestampAdjustment;
}

@property (nonatomic, retain) PAPBApplication *accessor;
@property (nonatomic, retain) NSMutableArray *assetIdentifiers;
@property (nonatomic, readonly) bool hasAccessor;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasKind;
@property (nonatomic) bool hasTimestampAdjustment;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic) int kind;
@property (nonatomic) double timestampAdjustment;

+ (Class)assetIdentifiersType;

- (void).cxx_destruct;
- (id)accessor;
- (void)addAssetIdentifiers:(id)arg1;
- (id)assetIdentifiers;
- (id)assetIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetIdentifiersCount;
- (void)clearAssetIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessor;
- (bool)hasIdentifier;
- (bool)hasKind;
- (bool)hasTimestampAdjustment;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessor:(id)arg1;
- (void)setAssetIdentifiers:(id)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setHasTimestampAdjustment:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setTimestampAdjustment:(double)arg1;
- (double)timestampAdjustment;
- (void)writeTo:(id)arg1;

@end
