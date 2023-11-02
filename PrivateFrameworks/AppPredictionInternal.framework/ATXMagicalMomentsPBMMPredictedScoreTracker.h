
@interface ATXMagicalMomentsPBMMPredictedScoreTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    int  _anchor;
    struct { 
        unsigned int anchor : 1; 
    }  _has;
    NSString * _topBundleId;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) int anchor;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasAnchor;
@property (nonatomic, readonly) bool hasTopBundleId;
@property (nonatomic, retain) NSString *topBundleId;

- (void).cxx_destruct;
- (int)StringAsAnchor:(id)arg1;
- (id)abGroup;
- (int)anchor;
- (id)anchorAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasAnchor;
- (bool)hasTopBundleId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setAnchor:(int)arg1;
- (void)setHasAnchor:(bool)arg1;
- (void)setTopBundleId:(id)arg1;
- (id)topBundleId;
- (void)writeTo:(id)arg1;

@end
