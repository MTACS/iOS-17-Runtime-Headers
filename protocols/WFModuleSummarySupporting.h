
@protocol WFModuleSummarySupporting <NSObject>

@optional

+ (Class)moduleSummaryEditorClass;
+ (bool)supportsEditingMultipleValues;

- (<WFParameterState> *)defaultStateForNewArrayElement;
- (bool)moduleSummaryShowsAddButtonForState:(id <WFParameterState>)arg1;
- (WFSlotTemplateSlot *)moduleSummarySlotForState:(id <WFParameterState>)arg1;
- (NSArray *)moduleSummarySlotsForState:(id <WFParameterState>)arg1;

@end
