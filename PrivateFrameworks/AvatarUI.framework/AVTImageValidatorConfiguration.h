
@interface AVTImageValidatorConfiguration : NSObject {
    bool  _shouldCheckForDuplicateImages;
    bool  _shouldCheckForTransparentImages;
}

@property (nonatomic) bool shouldCheckForDuplicateImages;
@property (nonatomic) bool shouldCheckForTransparentImages;

- (void)setShouldCheckForDuplicateImages:(bool)arg1;
- (void)setShouldCheckForTransparentImages:(bool)arg1;
- (bool)shouldCheckForDuplicateImages;
- (bool)shouldCheckForTransparentImages;

@end
