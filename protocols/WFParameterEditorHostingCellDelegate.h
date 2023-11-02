
@protocol WFParameterEditorHostingCellDelegate <NSObject>

@required

- (void)parameterEditorCell:(WFParameterEditorHostingCell *)arg1 didUpdateParameterState:(id <WFParameterState>)arg2;
- (void)parameterEditorCellDidInvalidateSize:(WFParameterEditorHostingCell *)arg1;

@end
