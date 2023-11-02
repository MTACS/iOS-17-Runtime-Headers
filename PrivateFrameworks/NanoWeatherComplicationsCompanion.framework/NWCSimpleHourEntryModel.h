
@interface NWCSimpleHourEntryModel : NSObject <NSSecureCoding> {
    NSString * _bottomString;
    bool  _isDay;
    NSString * _middleString;
    NSTimeZone * _timeZone;
    NSString * _topString;
}

@property (readonly) NSString *bottomString;
@property (readonly) bool isDay;
@property (readonly) NSString *middleString;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) NSString *topString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bottomString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopString:(id)arg1 middleString:(id)arg2 bottomString:(id)arg3 isDay:(bool)arg4 timeZone:(id)arg5;
- (bool)isDay;
- (id)middleString;
- (id)timeZone;
- (id)topString;

@end
