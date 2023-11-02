
@interface MUDayRowViewModel : NSObject {
    NSArray * _AMPMStrings;
    NSString * _dayString;
    NSArray * _hourStrings;
    NSString * _labelHeaderString;
}

@property (nonatomic, retain) NSArray *AMPMStrings;
@property (nonatomic, retain) NSString *dayString;
@property (nonatomic, retain) NSArray *hourStrings;
@property (nonatomic, retain) NSString *labelHeaderString;

- (void).cxx_destruct;
- (id)AMPMStrings;
- (id)buildDefaultPlacecardHoursString;
- (id)dayString;
- (id)hourStrings;
- (id)labelHeaderString;
- (void)setAMPMStrings:(id)arg1;
- (void)setDayString:(id)arg1;
- (void)setHourStrings:(id)arg1;
- (void)setLabelHeaderString:(id)arg1;

@end
