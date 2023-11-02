
@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay {
    NSLayoutConstraint * _topPaddingConstraint;
}

@property (nonatomic, readonly) long long appearance;
@property (nonatomic, retain) NSLayoutConstraint *topPaddingConstraint;

+ (bool)shouldShowEditingIntroduction;

- (void).cxx_destruct;
- (id)animatedTutorialViewNamed:(id)arg1 ofType:(id)arg2 needsFrame:(bool)arg3;
- (id)buttonTitle;
- (void)extraButtonTapAction;
- (id)mediaContents;
- (double)pagingInterval;
- (bool)presentsFullScreen;
- (void)setTopPaddingConstraint:(id)arg1;
- (id)textBodyDescriptions;
- (id)textBodyFont;
- (id)textTitleDescriptions;
- (id)topPaddingConstraint;
- (void)updateConstraints;

@end
