
@interface GKComposeHeaderFieldBackgroundView : UIImageView {
    unsigned int  _location;
}

@property (nonatomic) unsigned int location;

- (id)init;
- (void)layoutSubviews;
- (unsigned int)location;
- (void)resetBackgroundImage;
- (void)setLocation:(unsigned int)arg1;

@end
