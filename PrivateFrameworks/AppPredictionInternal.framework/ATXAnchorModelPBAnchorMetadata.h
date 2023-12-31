
@interface ATXAnchorModelPBAnchorMetadata : PBCodable <NSCopying> {
    NSString * _anchorEventIdentifier;
    int  _anchorEventType;
    int  _anchorType;
    unsigned int  _dayOfMonth;
    int  _dayOfWeek;
    struct { 
        unsigned int anchorEventType : 1; 
        unsigned int anchorType : 1; 
        unsigned int dayOfMonth : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int hourOfDay : 1; 
        unsigned int locationType : 1; 
        unsigned int month : 1; 
    }  _has;
    unsigned int  _hourOfDay;
    NSString * _locationIdentifier;
    int  _locationType;
    unsigned int  _month;
}

@property (nonatomic, retain) NSString *anchorEventIdentifier;
@property (nonatomic) int anchorEventType;
@property (nonatomic) int anchorType;
@property (nonatomic) unsigned int dayOfMonth;
@property (nonatomic) int dayOfWeek;
@property (nonatomic, readonly) bool hasAnchorEventIdentifier;
@property (nonatomic) bool hasAnchorEventType;
@property (nonatomic) bool hasAnchorType;
@property (nonatomic) bool hasDayOfMonth;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic, readonly) bool hasLocationIdentifier;
@property (nonatomic) bool hasLocationType;
@property (nonatomic) bool hasMonth;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic, retain) NSString *locationIdentifier;
@property (nonatomic) int locationType;
@property (nonatomic) unsigned int month;

- (void).cxx_destruct;
- (int)StringAsAnchorEventType:(id)arg1;
- (int)StringAsAnchorType:(id)arg1;
- (int)StringAsDayOfWeek:(id)arg1;
- (int)StringAsLocationType:(id)arg1;
- (id)anchorEventIdentifier;
- (int)anchorEventType;
- (id)anchorEventTypeAsString:(int)arg1;
- (int)anchorType;
- (id)anchorTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfMonth;
- (int)dayOfWeek;
- (id)dayOfWeekAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnchorEventIdentifier;
- (bool)hasAnchorEventType;
- (bool)hasAnchorType;
- (bool)hasDayOfMonth;
- (bool)hasDayOfWeek;
- (bool)hasHourOfDay;
- (bool)hasLocationIdentifier;
- (bool)hasLocationType;
- (bool)hasMonth;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (bool)isEqual:(id)arg1;
- (id)locationIdentifier;
- (int)locationType;
- (id)locationTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)month;
- (bool)readFrom:(id)arg1;
- (void)setAnchorEventIdentifier:(id)arg1;
- (void)setAnchorEventType:(int)arg1;
- (void)setAnchorType:(int)arg1;
- (void)setDayOfMonth:(unsigned int)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setHasAnchorEventType:(bool)arg1;
- (void)setHasAnchorType:(bool)arg1;
- (void)setHasDayOfMonth:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)setLocationIdentifier:(id)arg1;
- (void)setLocationType:(int)arg1;
- (void)setMonth:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
