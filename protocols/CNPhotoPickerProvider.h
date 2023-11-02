
@protocol CNPhotoPickerProvider <NSObject>

@required

- (NSString *)identifier;
- (id)initWithVisualIdentity:(CNVisualIdentity *)arg1;
- (NSArray *)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id <CNScheduler>)arg4 callbackQueue:(id <CNScheduler>)arg5 itemDelegate:(id <CNPhotoPickerProviderItemDelegate>)arg6;
- (void)setIdentifier:(NSString *)arg1;

@end
