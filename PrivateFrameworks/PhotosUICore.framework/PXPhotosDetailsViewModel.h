
@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel> {
    NSSet * _disabledActionTypes;
    bool  _faceModeEnabled;
    bool  _selecting;
    PXSectionedSelectionManager * _selectionManager;
    bool  _supportsFaceMode;
    bool  _supportsSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disabledActionTypes;
@property (getter=isFaceModeEnabled, nonatomic, readonly) bool faceModeEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isSelecting, nonatomic, readonly) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;

- (void).cxx_destruct;
- (id)disabledActionTypes;
- (bool)isFaceModeEnabled;
- (bool)isSelecting;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)selectionManager;
- (void)setDisabledActionTypes:(id)arg1;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setSupportsFaceMode:(bool)arg1;
- (void)setSupportsSelection:(bool)arg1;
- (bool)supportsFaceMode;
- (bool)supportsSelection;

@end
