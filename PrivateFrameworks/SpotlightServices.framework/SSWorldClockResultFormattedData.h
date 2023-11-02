
@interface SSWorldClockResultFormattedData : NSObject {
    SFClockImage * _clockImage;
    NSString * _countryName;
    bool  _isCapital;
    NSString * _location;
    SFCommand * _punchoutCommand;
    bool  _shouldEmphasizeTimeZone;
    NSString * _time;
    NSString * _timeAndTimeZoneOffsetDescription;
    NSString * _timeZoneAbbreviation;
    NSString * _timeZoneDescription;
    NSString * _timeZoneOffsetDescription;
}

@property (nonatomic, retain) SFClockImage *clockImage;
@property (nonatomic, retain) NSString *countryName;
@property (nonatomic) bool isCapital;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) SFCommand *punchoutCommand;
@property (nonatomic) bool shouldEmphasizeTimeZone;
@property (nonatomic, retain) NSString *time;
@property (nonatomic, retain) NSString *timeAndTimeZoneOffsetDescription;
@property (nonatomic, retain) NSString *timeZoneAbbreviation;
@property (nonatomic, retain) NSString *timeZoneDescription;
@property (nonatomic, retain) NSString *timeZoneOffsetDescription;

- (void).cxx_destruct;
- (id)clockImage;
- (id)countryName;
- (bool)isCapital;
- (id)location;
- (id)punchoutCommand;
- (void)setClockImage:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setIsCapital:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPunchoutCommand:(id)arg1;
- (void)setShouldEmphasizeTimeZone:(bool)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeAndTimeZoneOffsetDescription:(id)arg1;
- (void)setTimeZoneAbbreviation:(id)arg1;
- (void)setTimeZoneDescription:(id)arg1;
- (void)setTimeZoneOffsetDescription:(id)arg1;
- (bool)shouldEmphasizeTimeZone;
- (id)time;
- (id)timeAndTimeZoneOffsetDescription;
- (id)timeZoneAbbreviation;
- (id)timeZoneDescription;
- (id)timeZoneOffsetDescription;

@end
