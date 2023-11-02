
@interface WFPosterPickerParameter : WFParameter <WFModuleSummarySupporting>

@property (nonatomic, readonly) bool handlesDefaultPoster;
@property (nonatomic, readonly) bool shouldOnlyShowEligiblePhotosPosters;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)handlesDefaultPoster;
- (bool)shouldOnlyShowEligiblePhotosPosters;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
