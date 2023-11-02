
@interface BCSLocalizedStringProvider : NSObject <BCSLocalizedStringProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)willOpenAtDifferentDayPluralWithFormattedTime:(id)arg1 formattedDay:(id)arg2;
- (id)willOpenAtDifferentDaySingularWithFormattedTime:(id)arg1 formattedDay:(id)arg2;
- (id)willOpenAtSameDayPluralWithFormattedTime:(id)arg1;
- (id)willOpenAtSameDaySingularWithFormattedTime:(id)arg1;

@end
