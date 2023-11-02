
@interface ATXMagicalMomentsPBMMShownTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    int  _anchor;
    NSString * _bundleId;
    NSString * _consumerSubType;
    struct { 
        unsigned int anchor : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) int anchor;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasAnchor;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasConsumerSubType;

- (void).cxx_destruct;
- (int)StringAsAnchor:(id)arg1;
- (id)abGroup;
- (int)anchor;
- (id)anchorAsString:(int)arg1;
- (id)bundleId;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasAnchor;
- (bool)hasBundleId;
- (bool)hasConsumerSubType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setAnchor:(int)arg1;
- (void)setBundleId:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setHasAnchor:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
