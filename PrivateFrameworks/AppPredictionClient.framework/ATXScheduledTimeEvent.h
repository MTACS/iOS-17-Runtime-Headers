
@interface ATXScheduledTimeEvent : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    ATXTimeContext * _context;
    ATXTimeEventLocation * _destinationLocation;
    NSString * _domainIdentifier;
    NSDate * _endDate;
    double  _etaMinutes;
    NSString * _eventDescription;
    NSArray * _feedbackOptions;
    long long  _fuzzyTime;
    ATXTimeGlyphPresentation * _glyphPresentation;
    NSString * _identifier;
    bool  _isAllDayEvent;
    bool  _isCompleted;
    bool  _isGap;
    bool  _isPast;
    ATXTimeEventPresentation * _mediumPresentation;
    long long  _priority;
    long long  _relevanceTag;
    ATXTimeEventPresentation * _smallPresentation;
    ATXTimeEventSource * _source;
    ATXTimeEventLocation * _sourceLocation;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly) ATXTimeContext *context;
@property (nonatomic, readonly) ATXTimeEventLocation *destinationLocation;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double etaMinutes;
@property (nonatomic, readonly, copy) NSString *eventDescription;
@property (nonatomic, readonly, copy) NSArray *feedbackOptions;
@property (nonatomic, readonly) long long fuzzyTime;
@property (nonatomic, readonly) ATXTimeGlyphPresentation *glyphPresentation;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isAllDayEvent;
@property bool isCompleted;
@property (nonatomic, readonly) bool isGap;
@property (nonatomic, readonly) bool isPast;
@property (nonatomic, readonly) ATXTimeEventPresentation *mediumPresentation;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) long long relevanceTag;
@property (nonatomic, readonly) ATXTimeEventPresentation *smallPresentation;
@property (nonatomic, readonly) ATXTimeEventSource *source;
@property (nonatomic, readonly) ATXTimeEventLocation *sourceLocation;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;
+ (id)uniformType;

- (void).cxx_destruct;
- (id)actions;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationLocation;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (double)etaMinutes;
- (id)eventDescription;
- (id)feedbackOptions;
- (long long)fuzzyTime;
- (id)glyphPresentation;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 identifier:(id)arg2 eventDescription:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 priority:(long long)arg6 source:(id)arg7 relevanceTag:(long long)arg8 fuzzyTime:(long long)arg9 context:(id)arg10 isGap:(bool)arg11 isPast:(bool)arg12 isAllDayEvent:(bool)arg13 isCompleted:(bool)arg14 etaMinutes:(double)arg15 mediumPresentation:(id)arg16 smallPresentation:(id)arg17 glyphPresentation:(id)arg18 sourceLocation:(id)arg19 destinationLocation:(id)arg20 actions:(id)arg21 feedbackOptions:(id)arg22;
- (bool)isAllDayEvent;
- (bool)isCompleted;
- (bool)isGap;
- (bool)isPast;
- (id)mediumPresentation;
- (long long)priority;
- (long long)relevanceTag;
- (void)setIsCompleted:(bool)arg1;
- (id)smallPresentation;
- (id)source;
- (id)sourceLocation;
- (id)startDate;

@end
