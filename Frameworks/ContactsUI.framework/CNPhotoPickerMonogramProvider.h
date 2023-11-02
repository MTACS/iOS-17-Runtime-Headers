
@interface CNPhotoPickerMonogramProvider : NSObject <CNPhotoPickerProvider> {
    NSString * _identifier;
    CNVisualIdentity * _visualIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

+ (id)generateMonogramItemForVisualIdentity:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 isVariantOptionItem:(bool)arg5 backgroundColor:(id)arg6;
+ (id)monogramProviderItemForVisualIdentity:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 isVariantOptionItem:(bool)arg5 backgroundColor:(id)arg6;
+ (id)providerItemForVisualIdentity:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 RTL:(bool)arg3;
+ (id)providerItemForVisualIdentity:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 backgroundColor:(id)arg5;
+ (id)providerItemWithRandomBackgroundColorForVisualIdentity:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 RTL:(bool)arg3;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithVisualIdentity:(id)arg1;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (void)setIdentifier:(id)arg1;
- (id)visualIdentity;

@end
