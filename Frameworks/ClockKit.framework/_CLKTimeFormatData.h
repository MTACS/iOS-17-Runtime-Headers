
@interface _CLKTimeFormatData : NSObject {
    NSNumberFormatter * _doubleWidthNumberFormatter;
    NSString * _formatHourMin;
    NSString * _formatHourMinSec;
    NSString * _formatHourMinSecSubsec;
    NSString * _formatMin;
    NSString * _formatMinSec;
    NSString * _formatMinSecSubsec;
    NSNumberFormatter * _singleWidthNumberFormatter;
}

@property (nonatomic, readonly) NSNumberFormatter *doubleWidthNumberFormatter;
@property (nonatomic, readonly) NSString *formatHourMin;
@property (nonatomic, readonly) NSString *formatHourMinSec;
@property (nonatomic, readonly) NSString *formatHourMinSecSubsec;
@property (nonatomic, readonly) NSString *formatMin;
@property (nonatomic, readonly) NSString *formatMinSec;
@property (nonatomic, readonly) NSString *formatMinSecSubsec;
@property (nonatomic, readonly) NSNumberFormatter *singleWidthNumberFormatter;

+ (id)_timeFormatDataAccessLock;
+ (id)_timeLocale;
+ (id)instanceForCurrentLocale;
+ (void)resetTimeFormatData;

- (void).cxx_destruct;
- (id)doubleWidthNumberFormatter;
- (id)formatHourMin;
- (id)formatHourMinSec;
- (id)formatHourMinSecSubsec;
- (id)formatMin;
- (id)formatMinSec;
- (id)formatMinSecSubsec;
- (id)init;
- (id)singleWidthNumberFormatter;

@end
