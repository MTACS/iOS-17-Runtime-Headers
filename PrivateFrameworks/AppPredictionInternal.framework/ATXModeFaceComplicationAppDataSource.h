
@interface ATXModeFaceComplicationAppDataSource : NSObject <ATXModeFaceComplicationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)provideComplicationsForSuggestedFaceType:(long long)arg1 environment:(id)arg2;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)arg1 environment:(id)arg2;

@end
