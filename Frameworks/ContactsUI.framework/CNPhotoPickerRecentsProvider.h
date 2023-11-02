
@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider> {
    bool  _containsContactImage;
    bool  _containsMonogram;
    CNVisualIdentity * _visualIdentity;
    NSString * identifier;
}

@property (nonatomic) bool containsContactImage;
@property (nonatomic) bool containsMonogram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

+ (id)log;

- (void).cxx_destruct;
- (bool)containsContactImage;
- (bool)containsMonogram;
- (id)defaultProviderItemWithContactImage:(id)arg1 renderingQueue:(id)arg2 callbackQueue:(id)arg3;
- (id)identifier;
- (id)initWithVisualIdentity:(id)arg1;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)providerItemForContactImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6;
- (id)providerItemForContactImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 fallbackToDefaultItem:(bool)arg7;
- (void)setContainsContactImage:(bool)arg1;
- (void)setContainsMonogram:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (id)visualIdentity;

@end
