
@interface CNPhotoPickerAddItemsProvider : NSObject <CNPhotoPickerProvider> {
    bool  _allowsEmoji;
    bool  _allowsMonograms;
    bool  _allowsPhotoFromLibraryItem;
    bool  _allowsTakePhotoItem;
    NSString * _identifier;
    CNVisualIdentity * _visualIdentity;
}

@property (nonatomic) bool allowsEmoji;
@property (nonatomic) bool allowsMonograms;
@property (nonatomic) bool allowsPhotoFromLibraryItem;
@property (nonatomic) bool allowsTakePhotoItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

- (void).cxx_destruct;
- (id)addItemOfType:(unsigned long long)arg1;
- (bool)allowsEmoji;
- (bool)allowsMonograms;
- (bool)allowsPhotoFromLibraryItem;
- (bool)allowsTakePhotoItem;
- (id)identifier;
- (id)initWithVisualIdentity:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1 allowsTakePhotoItem:(bool)arg2 allowsPhotoFromLibraryItem:(bool)arg3 allowsMonograms:(bool)arg4 allowsEmoji:(bool)arg5;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (void)setAllowsEmoji:(bool)arg1;
- (void)setAllowsMonograms:(bool)arg1;
- (void)setAllowsPhotoFromLibraryItem:(bool)arg1;
- (void)setAllowsTakePhotoItem:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (id)symbolImageNameForAddItemType:(unsigned long long)arg1;
- (id)visualIdentity;

@end
