
@interface WFSliderParameter : WFParameter <WFModuleSummarySupporting> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
}

@property (nonatomic, readonly) WFImage *maximumIcon;
@property (nonatomic, retain) NSNumber *maximumValue;
@property (nonatomic, readonly) WFImage *minimumIcon;
@property (nonatomic, retain) NSNumber *minimumValue;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelWithState:(id)arg1;
- (id)maximumIcon;
- (id)maximumValue;
- (id)minimumIcon;
- (id)minimumValue;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
