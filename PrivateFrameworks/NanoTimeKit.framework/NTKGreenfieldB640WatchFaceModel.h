
@interface NTKGreenfieldB640WatchFaceModel : NSObject {
    NTKGreenfieldDecodedRecipe * _decodedRecipe;
    bool  _isSelected;
}

@property (nonatomic, retain) NTKGreenfieldDecodedRecipe *decodedRecipe;
@property (nonatomic) bool isSelected;

- (void).cxx_destruct;
- (id)decodedRecipe;
- (id)initWithDecodedRecipe:(id)arg1;
- (bool)isSelected;
- (void)setDecodedRecipe:(id)arg1;
- (void)setIsSelected:(bool)arg1;

@end
