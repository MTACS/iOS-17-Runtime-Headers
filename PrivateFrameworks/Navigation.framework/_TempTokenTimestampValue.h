
@interface _TempTokenTimestampValue : NSObject <GEOServerFormatTokenTimeStampValue> {
    NSString * _formatPattern;
    double  _timeStamp;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeStamp;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)formatPattern;
- (id)initWithCoder:(id)arg1;
- (void)setFormatPattern:(id)arg1;
- (void)setTimeStamp:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (double)timeStamp;
- (id)timeZone;

@end
