
@interface NTKWorldClockGraphicCircularViewConfiguration : NSObject {
    bool  _inTritium;
    NSString * _labelText;
    NSDate * _overrideDate;
    NSTimeZone * _timeZone;
    CLKUIAlmanacTransitInfo * _transitInfo;
}

@property (nonatomic, readonly) bool inTritium;
@property (nonatomic, readonly) NSString *labelText;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) CLKUIAlmanacTransitInfo *transitInfo;

- (void).cxx_destruct;
- (bool)inTritium;
- (id)initWithTimeZone:(id)arg1 labelText:(id)arg2 transitInfo:(id)arg3 inTritium:(bool)arg4 overrideDate:(id)arg5;
- (id)labelText;
- (id)overrideDate;
- (id)timeZone;
- (id)transitInfo;

@end
