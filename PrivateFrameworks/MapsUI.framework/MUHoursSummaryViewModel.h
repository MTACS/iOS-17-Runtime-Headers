
@interface MUHoursSummaryViewModel : NSObject {
    NSArray * _AMPMSymbols;
    bool  _hideChevron;
    NSString * _hoursText;
    UIColor * _openStateColor;
    NSString * _openStateText;
    bool  _serviceHours;
    NSString * _titleText;
}

@property (nonatomic, retain) NSArray *AMPMSymbols;
@property (nonatomic) bool hideChevron;
@property (nonatomic, retain) NSString *hoursText;
@property (nonatomic, retain) UIColor *openStateColor;
@property (nonatomic, retain) NSString *openStateText;
@property (getter=isServiceHours, nonatomic) bool serviceHours;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (id)AMPMSymbols;
- (id)buildDefaultPlacecardHoursString;
- (bool)hideChevron;
- (id)hoursText;
- (id)init;
- (bool)isServiceHours;
- (id)openStateColor;
- (id)openStateText;
- (void)setAMPMSymbols:(id)arg1;
- (void)setHideChevron:(bool)arg1;
- (void)setHoursText:(id)arg1;
- (void)setOpenStateColor:(id)arg1;
- (void)setOpenStateText:(id)arg1;
- (void)setServiceHours:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;

@end
