
@interface WFContactFieldParameter : WFParameter <WFModuleSummarySupporting> {
    bool  _allowsCustomHandles;
    bool  _allowsTextEntry;
    NSString * _autocapitalizationType;
    NSString * _autocorrectionType;
    bool  _hidesLabel;
    NSArray * _supportedContactProperties;
    NSString * _textAlignment;
}

@property (nonatomic, readonly) bool allowsCustomHandles;
@property (nonatomic, readonly) bool allowsTextEntry;
@property (nonatomic, readonly) NSString *autocapitalizationType;
@property (nonatomic, readonly) NSString *autocorrectionType;
@property (nonatomic, readonly) bool hidesLabel;
@property (nonatomic, readonly) NSString *keyboardType;
@property (nonatomic, readonly) NSArray *supportedContactProperties;
@property (nonatomic, readonly) NSString *textAlignment;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (bool)allowsCustomHandles;
- (bool)allowsTextEntry;
- (id)autocapitalizationType;
- (id)autocorrectionType;
- (bool)displaysMultipleValueEditor;
- (bool)hidesLabel;
- (id)initWithDefinition:(id)arg1;
- (id)keyboardType;
- (Class)multipleStateClass;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;
- (Class)stateClass;
- (id)supportedContactProperties;
- (id)textAlignment;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)defaultStateForNewArrayElement;
- (id)labelForState:(id)arg1;
- (bool)moduleSummaryShowsAddButtonForState:(id)arg1;
- (id)moduleSummarySlotForState:(id)arg1;

@end
