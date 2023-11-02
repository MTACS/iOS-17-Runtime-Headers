
@protocol MPMutableRadioStationEvent <NSObject>

@required

- (NSString *)descriptionText;
- (NSDate *)endTime;
- (void)setDescriptionText:(NSString *)arg1;
- (void)setEndTime:(NSDate *)arg1;
- (void)setStartTime:(NSDate *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSDate *)startTime;
- (NSString *)title;

@end
