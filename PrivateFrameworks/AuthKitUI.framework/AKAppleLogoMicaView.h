
@interface AKAppleLogoMicaView : UIView {
    AKUIMicaPlayer * _micaPlayer;
}

@property (nonatomic, retain) AKUIMicaPlayer *micaPlayer;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)loadMicaFile;
- (id)micaPlayer;
- (void)setMicaPlayer:(id)arg1;

@end
