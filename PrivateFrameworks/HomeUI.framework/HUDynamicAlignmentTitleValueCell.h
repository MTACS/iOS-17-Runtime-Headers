
@interface HUDynamicAlignmentTitleValueCell : HUTitleValueCell {
    HUDynamicAlignmentTitleValueCellLayoutOptions * _layoutOptions;
}

@property (nonatomic, retain) HUDynamicAlignmentTitleValueCellLayoutOptions *layoutOptions;

- (void).cxx_destruct;
- (void)_ensureCorrectHeaderViewOrientation;
- (id)layoutOptions;
- (void)setLayoutOptions:(id)arg1;
- (bool)useVerticalLayout;

@end
