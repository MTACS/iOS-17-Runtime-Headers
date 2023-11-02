
@interface CLSCurationModel_v5 : CLSCurationModel_v4 {
    CLSCLIPprintModel * _CLIPprintModel;
    CLSCityNatureModel * _cityNatureModel;
    CLSWallpaperScoreModel * _wallpaperScoreModel;
}

@property (readonly) CLSCLIPprintModel *CLIPprintModel;
@property (readonly) CLSCityNatureModel *cityNatureModel;
@property (readonly) CLSNSFWModel *nsfwModel;
@property (readonly) CLSWallpaperScoreModel *wallpaperScoreModel;

+ (id)baseSpecificationWithSpecification:(id)arg1;

- (void).cxx_destruct;
- (id)CLIPprintModel;
- (bool)avoidIfPossibleForKeyAssetWithAsset:(id)arg1 statistics:(struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { unsigned int x_15_1_1; } x15; struct { unsigned int x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; }*)arg2;
- (id)cityNatureModel;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)arg1;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)arg1;
- (id)initWithCurationModelSpecification:(id)arg1;
- (bool)isShowcasingFoodWithAsset:(id)arg1;
- (id)wallpaperScoreModel;

@end
