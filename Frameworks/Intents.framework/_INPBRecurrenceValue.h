
@interface _INPBRecurrenceValue : PBCodable <NSCopying, NSSecureCoding, _INPBRecurrenceValue> {
    int  _frequency;
    struct { 
        unsigned int frequency : 1; 
        unsigned int interval : 1; 
        unsigned int ordinal : 1; 
    }  _has;
    unsigned long long  _interval;
    long long  _ordinal;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _weeklyRecurrenceDays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frequency;
@property (nonatomic) bool hasFrequency;
@property (nonatomic) bool hasInterval;
@property (nonatomic) bool hasOrdinal;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) long long ordinal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int*weeklyRecurrenceDays;
@property (nonatomic, readonly) unsigned long long weeklyRecurrenceDaysCount;

+ (bool)supportsSecureCoding;

- (int)StringAsFrequency:(id)arg1;
- (int)StringAsWeeklyRecurrenceDays:(id)arg1;
- (void)addWeeklyRecurrenceDays:(int)arg1;
- (void)clearWeeklyRecurrenceDays;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)frequency;
- (id)frequencyAsString:(int)arg1;
- (bool)hasFrequency;
- (bool)hasInterval;
- (bool)hasOrdinal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;
- (long long)ordinal;
- (bool)readFrom:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setHasFrequency:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setOrdinal:(long long)arg1;
- (void)setWeeklyRecurrenceDays:(int*)arg1 count:(unsigned long long)arg2;
- (int*)weeklyRecurrenceDays;
- (id)weeklyRecurrenceDaysAsString:(int)arg1;
- (int)weeklyRecurrenceDaysAtIndex:(unsigned long long)arg1;
- (unsigned long long)weeklyRecurrenceDaysCount;
- (void)writeTo:(id)arg1;

@end
