
@interface AAUIAppleLogoMicaView : UIView {
    AAUIMicaPlayer * _micaPlayer;
}

@property (nonatomic, retain) AAUIMicaPlayer *micaPlayer;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)loadMicaFile;
- (id)micaPlayer;
- (void)setMicaPlayer:(id)arg1;

@end
