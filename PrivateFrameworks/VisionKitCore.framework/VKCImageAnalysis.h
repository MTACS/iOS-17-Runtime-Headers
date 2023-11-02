
@interface VKCImageAnalysis : VKImageAnalysis <PXVKImageAnalysis>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDataDetectors;
@property (nonatomic, readonly) bool hasTexts;
@property (nonatomic, readonly) bool hasVisualSearchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *resultItems;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)hasDataDetectors;
- (bool)hasResultsForPXVKAnalysisTypes:(unsigned long long)arg1;
- (bool)hasTexts;
- (bool)hasVisualSearchResults;
- (id)resultItems;

@end
