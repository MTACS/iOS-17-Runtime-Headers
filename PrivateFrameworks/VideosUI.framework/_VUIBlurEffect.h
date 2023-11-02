
@interface _VUIBlurEffect : UIBlurEffect {
    bool  _isProgressBar;
}

@property (nonatomic) bool isProgressBar;

- (id)effectSettings;
- (bool)isProgressBar;
- (void)setIsProgressBar:(bool)arg1;

@end
