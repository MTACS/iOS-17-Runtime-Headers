
@interface MTUISleepMetadata : NSObject {
    NSDateComponents * _alarmComponents;
    NSString * _detailedDescription;
    bool  _displaysTime;
    NSString * _mainDescription;
}

@property (nonatomic, retain) NSDateComponents *alarmComponents;
@property (nonatomic, retain) NSString *detailedDescription;
@property (nonatomic) bool displaysTime;
@property (nonatomic, retain) NSString *mainDescription;

- (void).cxx_destruct;
- (id)alarmComponents;
- (id)detailedDescription;
- (bool)displaysTime;
- (id)mainDescription;
- (void)setAlarmComponents:(id)arg1;
- (void)setDetailedDescription:(id)arg1;
- (void)setDisplaysTime:(bool)arg1;
- (void)setMainDescription:(id)arg1;

@end
