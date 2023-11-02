
@interface WFModuleSummaryTemplateBuilder : NSObject {
    NSArray * _formatItems;
    NSString * _formatString;
    NSArray * _parameterKeys;
}

@property (nonatomic, retain) NSArray *formatItems;
@property (nonatomic, readonly, copy) NSString *formatString;
@property (nonatomic, copy) NSArray *parameterKeys;

+ (bool)formatString:(id)arg1 containsParameterKey:(id)arg2;
+ (id)slotsForMultipleParameterState:(id)arg1 inParameter:(id)arg2;

- (void).cxx_destruct;
- (id)buildContentWithParameters:(id)arg1 editableParameters:(id)arg2 parameterStates:(id)arg3 variableBeingEdited:(id)arg4;
- (id)contentByEnumeratingSummaryWithParameterSlotBuilder:(id /* block */)arg1;
- (id)formatItems;
- (id)formatString;
- (id)initWithFormatString:(id)arg1;
- (void)itemizeFormatStringIfNeeded;
- (id)parameterKeys;
- (void)setFormatItems:(id)arg1;
- (void)setParameterKeys:(id)arg1;

@end
