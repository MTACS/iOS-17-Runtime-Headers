
@interface ATXMPBDonationRatioTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    int  _actionType;
    struct { 
        unsigned int ratio : 1; 
        unsigned int actionType : 1; 
    }  _has;
    double  _ratio;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) int actionType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasRatio;
@property (nonatomic) double ratio;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (id)abGroup;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasActionType;
- (bool)hasRatio;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)ratio;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasRatio:(bool)arg1;
- (void)setRatio:(double)arg1;
- (void)writeTo:(id)arg1;

@end
