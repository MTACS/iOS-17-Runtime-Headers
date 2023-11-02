
@interface CNPhotoPickerEmojiProvider : NSObject <CNPhotoPickerProvider> {
    NSString * _identifier;
    CNPhotoPickerVariantsManager * _variantsManager;
    CNVisualIdentity * _visualIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithVisualIdentity:(id)arg1;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (void)setIdentifier:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (id)variantsManager;
- (id)visualIdentity;

@end
