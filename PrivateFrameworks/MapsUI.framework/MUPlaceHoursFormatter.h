
@interface MUPlaceHoursFormatter : NSObject {
    NSArray * _AMPMSymbols;
    bool  _formatAMPM;
    NSString * _hoursString;
}

@property (nonatomic, readonly) NSArray *AMPMSymbols;
@property (nonatomic, readonly) NSString *hoursString;

+ (id)_AMPMFont;
+ (id)_hoursMonospacedFont;
+ (id)hoursFormatterFromHoursStringComponents:(id)arg1 AMPMSymbols:(id)arg2;

- (void).cxx_destruct;
- (id)AMPMSymbols;
- (id)buildAttributedHourStringWithHourFont:(id)arg1 AMPMFont:(id)arg2 hourColor:(id)arg3;
- (id)buildDefaultPlacecardHoursString;
- (id)hoursString;
- (id)initWithHoursString:(id)arg1 AMPMSymbols:(id)arg2;

@end
