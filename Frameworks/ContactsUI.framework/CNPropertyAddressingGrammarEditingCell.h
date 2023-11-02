
@interface CNPropertyAddressingGrammarEditingCell : CNPropertySimpleCell

+ (bool)wantsHorizontalLayout;

- (bool)allowsCellSelection;
- (void)updateConstraints;
- (void)updateWithPropertyItem:(id)arg1;
- (id)valueView;

@end
