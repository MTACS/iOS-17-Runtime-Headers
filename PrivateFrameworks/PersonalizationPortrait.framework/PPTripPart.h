
@interface PPTripPart : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSString * _endLocation;
    NSArray * _eventIdentifiers;
    NSString * _fallbackLocationString;
    CLPlacemark * _mainLocation;
    NSDate * _startDate;
    NSString * _startLocation;
    unsigned char  _tripMode;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *endLocation;
@property (nonatomic, readonly) NSArray *eventIdentifiers;
@property (nonatomic, retain) NSString *fallbackLocationString;
@property (nonatomic, retain) CLPlacemark *mainLocation;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *startLocation;
@property (nonatomic, readonly) unsigned char tripMode;

+ (id)descriptionForTripMode:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destinationString;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)endLocation;
- (id)eventIdentifiers;
- (id)fallbackLocationString;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventIdentifiers:(id)arg3 mode:(unsigned char)arg4 location:(id)arg5 fallbackLocationString:(id)arg6;
- (id)mainLocation;
- (void)setFallbackLocationString:(id)arg1;
- (void)setMainLocation:(id)arg1;
- (id)startDate;
- (id)startLocation;
- (unsigned char)tripMode;

@end
