
@interface _UIBarBackgroundImageView : UIImageView {
    UIImageView * _customImageContainer;
    UIView * _topStripView;
    bool  _translucent;
}

@property (getter=isTranslucent, nonatomic) bool translucent;

- (void).cxx_destruct;
- (id)image;
- (bool)isTranslucent;
- (void)removeTopStripView;
- (void)setImage:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)topStripView;
- (void)updateTopStripViewCreateIfNecessary;

@end
