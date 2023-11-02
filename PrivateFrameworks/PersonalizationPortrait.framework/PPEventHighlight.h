
@interface PPEventHighlight : NSObject <NSSecureCoding> {
    struct CGColor { } * _calendarColor;
    NSDate * _endDate;
    NSString * _eventIdentifier;
    NSURL * _externalURI;
    NSArray * _features;
    bool  _isExtraordinary;
    NSString * _location;
    NSString * _organizer;
    unsigned long long  _prominentFeature;
    double  _score;
    NSDate * _startDate;
    NSString * _title;
}

@property (nonatomic) struct CGColor { }*calendarColor;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSString *eventIdentifier;
@property (nonatomic, retain) NSURL *externalURI;
@property (nonatomic, retain) NSArray *features;
@property (nonatomic) bool isExtraordinary;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSString *organizer;
@property (nonatomic) unsigned long long prominentFeature;
@property (nonatomic) double score;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *title;

+ (id)describeProminentFeature:(unsigned long long)arg1;
+ (id)eventHighlightWithEKEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(bool)arg5;
+ (id)eventHighlightWithEvent:(id)arg1 score:(double)arg2 prominentFeature:(unsigned long long)arg3 features:(id)arg4 isExtraordinary:(bool)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGColor { }*)calendarColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventIdentifier;
- (id)externalURI;
- (id)features;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 externalURI:(id)arg2 title:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 location:(id)arg6 organizer:(id)arg7 calendarColor:(struct CGColor { }*)arg8 prominentFeature:(unsigned long long)arg9 features:(id)arg10 score:(double)arg11 isExtraordinary:(bool)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventHighlight:(id)arg1;
- (bool)isExtraordinary;
- (id)location;
- (id)organizer;
- (unsigned long long)prominentFeature;
- (double)score;
- (void)setCalendarColor:(struct CGColor { }*)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setIsExtraordinary:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setProminentFeature:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)title;

@end
