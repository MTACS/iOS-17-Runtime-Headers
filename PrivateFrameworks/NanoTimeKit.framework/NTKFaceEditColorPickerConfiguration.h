
@interface NTKFaceEditColorPickerConfiguration : NSObject {
    bool  _canAddColors;
    NTKPigmentEditOptionArray * _editableColors;
    NSMutableArray * _legacyColors;
    NTKPigmentEditOptionArray * _nonEditableColors;
}

@property (nonatomic) bool canAddColors;
@property (nonatomic, readonly) NTKPigmentEditOptionArray *editableColors;
@property (nonatomic, readonly) bool hasSeparator;
@property (nonatomic, readonly) NTKPigmentEditOptionArray *nonEditableColors;
@property (nonatomic, readonly) unsigned long long numberOfColors;

- (void).cxx_destruct;
- (void)addEditableColor:(id)arg1;
- (void)addLegacyColor:(id)arg1;
- (void)addNonEditableColor:(id)arg1;
- (bool)canAddColors;
- (id)colorAtIndex:(unsigned long long)arg1;
- (id)editableColors;
- (bool)hasSeparator;
- (unsigned long long)indexOfColor:(id)arg1;
- (unsigned long long)indexOfLegacyColor:(id)arg1;
- (id)init;
- (void)insertEditableColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLegacyColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertNonEditableColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)legacyColorAtIndex:(unsigned long long)arg1;
- (id)legacyColors;
- (id)nonEditableColors;
- (unsigned long long)numberOfColors;
- (void)removeEditableColor:(id)arg1;
- (void)removeEditableColorAtIndex:(unsigned long long)arg1;
- (void)removeLegacyColor:(id)arg1;
- (void)removeLegacyColorAtIndex:(unsigned long long)arg1;
- (void)removeNonEditableColor:(id)arg1;
- (void)removeNonEditableColorAtIndex:(unsigned long long)arg1;
- (void)setCanAddColors:(bool)arg1;

@end
