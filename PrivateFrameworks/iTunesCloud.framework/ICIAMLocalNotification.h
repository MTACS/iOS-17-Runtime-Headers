
@interface ICIAMLocalNotification : PBCodable <NSCopying> {
    double  _date;
    struct { 
        unsigned int date : 1; 
        unsigned int interval : 1; 
        unsigned int trigger : 1; 
    }  _has;
    double  _interval;
    NSString * _notification;
    int  _trigger;
}

@property (nonatomic) double date;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasInterval;
@property (nonatomic, readonly) bool hasNotification;
@property (nonatomic) bool hasTrigger;
@property (nonatomic) double interval;
@property (nonatomic, retain) NSString *notification;
@property (nonatomic) int trigger;

- (void).cxx_destruct;
- (int)StringAsTrigger:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (bool)hasInterval;
- (bool)hasNotification;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (double)interval;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notification;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setInterval:(double)arg1;
- (void)setNotification:(id)arg1;
- (void)setTrigger:(int)arg1;
- (int)trigger;
- (id)triggerAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
