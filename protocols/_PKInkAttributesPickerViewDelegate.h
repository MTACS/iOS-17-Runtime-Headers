
@protocol _PKInkAttributesPickerViewDelegate <NSObject>

@required

- (void)inkAttributesPickerViewDidChangeInkOpacity:(_PKInkAttributesPickerView *)arg1;
- (void)inkAttributesPickerViewDidChangeInkThickness:(_PKInkAttributesPickerView *)arg1;

@optional

- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(_PKInkAttributesPickerView *)arg1;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(_PKInkAttributesPickerView *)arg1;

@end
