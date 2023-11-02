
@interface PUPhotoEditImageValues : NSObject {
    NSDictionary * _apertureValues;
    NSDictionary * _autoCropValues;
    NSDictionary * _autoPerspectiveValues;
    bool  _complete;
    NSDictionary * _portraitValues;
    double  _smartColorAutoSuggestion;
    NSDictionary * _smartColorStatistics;
    double  _smartToneAutoSuggestion;
    NSDictionary * _smartToneStatistics;
}

@property (copy) NSDictionary *apertureValues;
@property (copy) NSDictionary *autoCropValues;
@property (copy) NSDictionary *autoPerspectiveValues;
@property (getter=isComplete) bool complete;
@property (copy) NSDictionary *portraitValues;
@property double smartColorAutoSuggestion;
@property (copy) NSDictionary *smartColorStatistics;
@property double smartToneAutoSuggestion;
@property (copy) NSDictionary *smartToneStatistics;

- (void).cxx_destruct;
- (id)apertureValues;
- (id)autoCropValues;
- (id)autoPerspectiveValues;
- (bool)isComplete;
- (id)portraitValues;
- (void)setApertureValues:(id)arg1;
- (void)setAutoCropValues:(id)arg1;
- (void)setAutoPerspectiveValues:(id)arg1;
- (void)setComplete:(bool)arg1;
- (void)setPortraitValues:(id)arg1;
- (void)setSmartColorAutoSuggestion:(double)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneAutoSuggestion:(double)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatistics;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatistics;

@end
