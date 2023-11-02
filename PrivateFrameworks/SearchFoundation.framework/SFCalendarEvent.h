
@interface SFCalendarEvent : NSObject <NSCopying, NSSecureCoding, SFCalendarEvent> {
    NSDate * _endDate;
    struct { 
        unsigned int isAllDay : 1; 
    }  _has;
    bool  _isAllDay;
    SFStructuredLocation * _location;
    NSString * _notes;
    NSDate * _startDate;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAllDay;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFStructuredLocation *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)hasIsAllDay;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (id)notes;
- (void)setEndDate:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)title;

@end
