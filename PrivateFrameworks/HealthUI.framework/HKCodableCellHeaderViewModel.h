
@interface HKCodableCellHeaderViewModel : PBCodable <NSCopying> {
    double  _detailDate;
    NSString * _detailText;
    long long  _detailsVisibility;
    bool  _forceDayGranularity;
    HKCodableColorRepresentation * _foregroundColor;
    struct APPLE_HKCodableCellHeaderViewModel_1 { 
        unsigned int detailDate : 1; 
        unsigned int detailsVisibility : 1; 
        unsigned int forceDayGranularity : 1; 
    }  _has;
    NSString * _systemImageName;
    NSString * _titleText;
}

@property (nonatomic) double detailDate;
@property (nonatomic, retain) NSString *detailText;
@property (nonatomic) long long detailsVisibility;
@property (nonatomic) bool forceDayGranularity;
@property (nonatomic, retain) HKCodableColorRepresentation *foregroundColor;
@property (nonatomic) bool hasDetailDate;
@property (nonatomic, readonly) bool hasDetailText;
@property (nonatomic) bool hasDetailsVisibility;
@property (nonatomic) bool hasForceDayGranularity;
@property (nonatomic, readonly) bool hasForegroundColor;
@property (nonatomic, readonly) bool hasSystemImageName;
@property (nonatomic, retain) NSString *systemImageName;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)detailDate;
- (id)detailText;
- (long long)detailsVisibility;
- (id)dictionaryRepresentation;
- (bool)forceDayGranularity;
- (id)foregroundColor;
- (bool)hasDetailDate;
- (bool)hasDetailText;
- (bool)hasDetailsVisibility;
- (bool)hasForceDayGranularity;
- (bool)hasForegroundColor;
- (bool)hasSystemImageName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetailDate:(double)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDetailsVisibility:(long long)arg1;
- (void)setForceDayGranularity:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHasDetailDate:(bool)arg1;
- (void)setHasDetailsVisibility:(bool)arg1;
- (void)setHasForceDayGranularity:(bool)arg1;
- (void)setSystemImageName:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)systemImageName;
- (id)titleText;
- (void)writeTo:(id)arg1;

@end
