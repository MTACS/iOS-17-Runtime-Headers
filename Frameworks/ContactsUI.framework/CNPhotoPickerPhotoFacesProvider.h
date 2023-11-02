
@interface CNPhotoPickerPhotoFacesProvider : NSObject <CNPhotoPickerProvider> {
    NSString * _identifier;
    CNVisualIdentity * _visualIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

+ (id)log;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForAsset:(id)arg1 face:(id)arg2;
- (id)getItemsFromPhotoLibraryWithItemDelegate:(id)arg1;
- (id)identifier;
- (id)initWithVisualIdentity:(id)arg1;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (void)setIdentifier:(id)arg1;
- (id)visualIdentity;

@end
