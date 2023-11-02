
@interface DDEventComponents : NSObject <NSSecureCoding> {
    NSURL * _URL;
    double  _duration;
    NSDate * _endDate;
    unsigned long long  _eventAttributes;
    NSString * _eventTypeIdentifier;
    NSString * _location;
    NSString * _notes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _originRange;
    long long  _source;
    NSDate * _startDate;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) unsigned long long eventAttributes;
@property (nonatomic, copy) NSString *eventTypeIdentifier;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSString *notes;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } originRange;
@property (nonatomic) long long source;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *title;

+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult { }*)arg2 context:(id)arg3;
+ (id)_eventComponents:(id)arg1 withSuggestedTitleFromNaturalLanguageContext:(id)arg2 context:(id)arg3;
+ (id)_eventsFromIntelligentSuggestions:(id)arg1;
+ (id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2;
+ (id)_messageWithNaturalLanguageContext:(id)arg1 context:(id)arg2;
+ (id)bestEventComponentsForResult:(struct __DDResult { }*)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)eventAttributes;
- (id)eventTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)notes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originRange;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventAttributes:(unsigned long long)arg1;
- (void)setEventTypeIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setOriginRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSource:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (long long)source;
- (id)startDate;
- (id)title;

@end
