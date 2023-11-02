
@protocol _UICellConfigurationStateReadonly <_UIViewConfigurationStateReadonly>

@required

- (bool)_usesAnyPlainListStyle;
- (long long)cellDragState;
- (long long)cellDropState;
- (bool)isEditing;
- (bool)isExpanded;
- (bool)isReordering;
- (bool)isSwiped;

@end
