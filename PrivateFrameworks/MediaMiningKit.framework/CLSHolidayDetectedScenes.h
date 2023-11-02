
@interface CLSHolidayDetectedScenes : NSObject {
    unsigned long long  _detectedSceneEdgeCaseCount;
    unsigned long long  _detectedSceneImperativeCount;
    unsigned long long  _detectedSceneImportantCount;
    unsigned long long  _detectedSceneMediumCount;
}

@property (nonatomic, readonly) unsigned long long detectedSceneEdgeCaseCount;
@property (nonatomic, readonly) unsigned long long detectedSceneImperativeCount;
@property (nonatomic, readonly) unsigned long long detectedSceneImportantCount;
@property (nonatomic, readonly) unsigned long long detectedSceneMediumCount;

- (unsigned long long)detectedSceneEdgeCaseCount;
- (unsigned long long)detectedSceneImperativeCount;
- (unsigned long long)detectedSceneImportantCount;
- (unsigned long long)detectedSceneMediumCount;
- (id)init;
- (void)recordDetectedSceneImportance:(unsigned long long)arg1;

@end
