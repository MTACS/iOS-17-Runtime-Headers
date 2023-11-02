
@interface IRStatisticsMO : NSManagedObject

@property (nonatomic, retain) NSDate *lastClearDate;
@property (nonatomic) long long lastMiLoLSLItems;
@property (nonatomic) long long lastMiLoModels;
@property (nonatomic) long long lastMiLoQuality;
@property (nonatomic) long long lastMiLoQualityReasonBitmap;
@property (nonatomic) long long numberOfContextChanges;
@property (nonatomic) long long numberOfCorrectPickerChoiceEvents;
@property (nonatomic) long long numberOfMiLoPredictions;
@property (nonatomic) long long numberOfMiLoPredictionsInUpdatesMode;
@property (nonatomic) long long numberOfPickerChoiceEvents;
@property (nonatomic, retain) IRServiceMO *service;
@property (nonatomic) long long timeInUpdatesModeInSeconds;

+ (id)fetchRequest;
+ (void)setPropertiesOfStatisticsMO:(id)arg1 withStatisticsDO:(id)arg2;

- (id)convert;

@end
