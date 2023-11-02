
@interface CLPInstSchemaHabitualUsageByCalendarWeekInformation : SISchemaInstrumentationMessage {
    unsigned int  _calendarWeekNumber;
    struct { 
        unsigned int calendarWeekNumber : 1; 
        unsigned int wasHabitualUserDuringCalendarWeek : 1; 
    }  _has;
    bool  _wasHabitualUserDuringCalendarWeek;
}

@property (nonatomic) unsigned int calendarWeekNumber;
@property (nonatomic) bool hasCalendarWeekNumber;
@property (nonatomic) bool hasWasHabitualUserDuringCalendarWeek;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool wasHabitualUserDuringCalendarWeek;

- (unsigned int)calendarWeekNumber;
- (void)deleteCalendarWeekNumber;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (id)dictionaryRepresentation;
- (bool)hasCalendarWeekNumber;
- (bool)hasWasHabitualUserDuringCalendarWeek;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCalendarWeekNumber:(unsigned int)arg1;
- (void)setHasCalendarWeekNumber:(bool)arg1;
- (void)setHasWasHabitualUserDuringCalendarWeek:(bool)arg1;
- (void)setWasHabitualUserDuringCalendarWeek:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)wasHabitualUserDuringCalendarWeek;
- (void)writeTo:(id)arg1;

@end
