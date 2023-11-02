
@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider> {
    bool  _includeUnifiedContactImages;
    CNVisualIdentity * _visualIdentity;
    NSString * identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool includeUnifiedContactImages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

- (void).cxx_destruct;
- (id)identifier;
- (bool)includeUnifiedContactImages;
- (id)initWithVisualIdentity:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1 includeUnifiedContactImages:(bool)arg2;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)providerItemForVisualIdentity:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 itemDelegate:(id)arg7;
- (void)setIdentifier:(id)arg1;
- (void)setIncludeUnifiedContactImages:(bool)arg1;
- (id)visualIdentity;

@end
