
@protocol _PKColorPickerImplementationDelegate <NSObject>

@required

- (void)colorPickerImplementationDidChangeSelectedColor:(id <_PKColorPickerImplementation>)arg1;

@optional

- (void)colorPickerImplementationUserDidTouchUpInside:(id <_PKColorPickerImplementation>)arg1;

@end
