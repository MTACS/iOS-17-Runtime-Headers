
@interface WFParameterEditorHostingCellContext : NSObject {
    WFParameterEditorHostingCell * _cell;
    UITraitCollection * _traitCollection;
}

@property (nonatomic) WFParameterEditorHostingCell *cell;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)cell;
- (void)setCell:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

@end
