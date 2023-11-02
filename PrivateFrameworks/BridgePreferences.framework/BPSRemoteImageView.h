
@interface BPSRemoteImageView : UIImageView {
    NSString * _desiredImageName;
    NSString * _fallbackImageName;
}

@property (nonatomic, copy) NSString *desiredImageName;
@property (nonatomic, copy) NSString *fallbackImageName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)desiredImageName;
- (id)fallbackImageName;
- (id)init;
- (void)setDesiredImageName:(id)arg1;
- (void)setFallbackImageName:(id)arg1;
- (void)updateImagesWithAnimation;
- (void)updateImagesWithAnimation:(bool)arg1;

@end
