
@protocol ATXModeFaceComplicationDataSource <NSObject>

@required

- (NSArray *)provideComplicationsForSuggestedFaceType:(long long)arg1 environment:(id <ATXSuggestedSpacesEnvironment>)arg2;
- (NSArray *)provideLandscapeComplicationsForSuggestedFaceType:(long long)arg1 environment:(id <ATXSuggestedSpacesEnvironment>)arg2;

@end
