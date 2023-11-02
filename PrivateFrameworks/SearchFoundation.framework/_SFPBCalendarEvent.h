
@interface _SFPBCalendarEvent : PBCodable <NSSecureCoding, _SFPBCalendarEvent> {
    _SFPBDate * _endDate;
    bool  _isAllDay;
    _SFPBStructuredLocation * _location;
    NSString * _notes;
    _SFPBDate * _startDate;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAllDay;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBStructuredLocation *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, retain) _SFPBDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (id)notes;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)title;
- (void)writeTo:(id)arg1;

@end
