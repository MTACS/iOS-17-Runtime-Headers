
@protocol PKInkAttributesPickerDelegate <NSObject>

@optional

- (void)_inkAttributesPickerUserDidEndDraggingSlider:(PKInkAttributesPicker *)arg1;
- (void)_inkAttributesPickerUserDidStartDraggingSlider:(PKInkAttributesPicker *)arg1;
- (void)inkAttributesPickerDidChangeInkOpacity:(PKInkAttributesPicker *)arg1;
- (void)inkAttributesPickerDidChangeInkThickness:(PKInkAttributesPicker *)arg1;
- (void)inkAttributesPickerDidChangeSelectedInk:(PKInkAttributesPicker *)arg1;

@end
