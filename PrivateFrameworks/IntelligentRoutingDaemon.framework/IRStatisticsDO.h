
@interface IRStatisticsDO : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _lastClearDate;
    long long  _lastMiLoLSLItems;
    long long  _lastMiLoModels;
    long long  _lastMiLoQuality;
    long long  _lastMiLoQualityReasonBitmap;
    long long  _numberOfContextChanges;
    long long  _numberOfCorrectPickerChoiceEvents;
    long long  _numberOfMiLoPredictions;
    long long  _numberOfMiLoPredictionsInUpdatesMode;
    long long  _numberOfPickerChoiceEvents;
    long long  _timeInUpdatesModeInSeconds;
}

@property (nonatomic, readonly) NSDate *lastClearDate;
@property (nonatomic, readonly) long long lastMiLoLSLItems;
@property (nonatomic, readonly) long long lastMiLoModels;
@property (nonatomic, readonly) long long lastMiLoQuality;
@property (nonatomic, readonly) long long lastMiLoQualityReasonBitmap;
@property (nonatomic, readonly) long long numberOfContextChanges;
@property (nonatomic, readonly) long long numberOfCorrectPickerChoiceEvents;
@property (nonatomic, readonly) long long numberOfMiLoPredictions;
@property (nonatomic, readonly) long long numberOfMiLoPredictionsInUpdatesMode;
@property (nonatomic, readonly) long long numberOfPickerChoiceEvents;
@property (nonatomic, readonly) long long timeInUpdatesModeInSeconds;

+ (id)statisticsDOWithNumberOfContextChanges:(long long)arg1 numberOfMiLoPredictions:(long long)arg2 numberOfMiLoPredictionsInUpdatesMode:(long long)arg3 lastMiLoLSLItems:(long long)arg4 lastMiLoQualityReasonBitmap:(long long)arg5 lastMiLoQuality:(long long)arg6 lastMiLoModels:(long long)arg7 timeInUpdatesModeInSeconds:(long long)arg8 numberOfPickerChoiceEvents:(long long)arg9 numberOfCorrectPickerChoiceEvents:(long long)arg10 lastClearDate:(id)arg11;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementLastClearDate:(id)arg1;
- (id)copyWithReplacementLastMiLoLSLItems:(long long)arg1;
- (id)copyWithReplacementLastMiLoModels:(long long)arg1;
- (id)copyWithReplacementLastMiLoQuality:(long long)arg1;
- (id)copyWithReplacementLastMiLoQualityReasonBitmap:(long long)arg1;
- (id)copyWithReplacementNumberOfContextChanges:(long long)arg1;
- (id)copyWithReplacementNumberOfCorrectPickerChoiceEvents:(long long)arg1;
- (id)copyWithReplacementNumberOfMiLoPredictions:(long long)arg1;
- (id)copyWithReplacementNumberOfMiLoPredictionsInUpdatesMode:(long long)arg1;
- (id)copyWithReplacementNumberOfPickerChoiceEvents:(long long)arg1;
- (id)copyWithReplacementTimeInUpdatesModeInSeconds:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberOfContextChanges:(long long)arg1 numberOfMiLoPredictions:(long long)arg2 numberOfMiLoPredictionsInUpdatesMode:(long long)arg3 lastMiLoLSLItems:(long long)arg4 lastMiLoQualityReasonBitmap:(long long)arg5 lastMiLoQuality:(long long)arg6 lastMiLoModels:(long long)arg7 timeInUpdatesModeInSeconds:(long long)arg8 numberOfPickerChoiceEvents:(long long)arg9 numberOfCorrectPickerChoiceEvents:(long long)arg10 lastClearDate:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStatisticsDO:(id)arg1;
- (id)lastClearDate;
- (long long)lastMiLoLSLItems;
- (long long)lastMiLoModels;
- (long long)lastMiLoQuality;
- (long long)lastMiLoQualityReasonBitmap;
- (long long)numberOfContextChanges;
- (long long)numberOfCorrectPickerChoiceEvents;
- (long long)numberOfMiLoPredictions;
- (long long)numberOfMiLoPredictionsInUpdatesMode;
- (long long)numberOfPickerChoiceEvents;
- (long long)timeInUpdatesModeInSeconds;

@end
