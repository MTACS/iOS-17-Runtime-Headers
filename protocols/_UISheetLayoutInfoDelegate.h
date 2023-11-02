
@protocol _UISheetLayoutInfoDelegate <NSObject>

@required

- (void)_sheetLayoutInfoDidInvalidateDetentValues:(_UISheetLayoutInfo *)arg1;
- (void)_sheetLayoutInfoDidInvalidateOutput:(_UISheetLayoutInfo *)arg1;
- (void)_sheetLayoutInfoDidInvalidateUntransformedFrame:(_UISheetLayoutInfo *)arg1;
- (void)_sheetLayoutInfoLayout:(_UISheetLayoutInfo *)arg1;
- (void)_sheetLayoutInfoPrelayout:(_UISheetLayoutInfo *)arg1;

@end
