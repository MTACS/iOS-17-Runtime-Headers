
@interface SiriSharedUIViewStackConstraints : NSObject {
    NSLayoutConstraint * _bottomConstraint;
    NSLayoutConstraint * _heightConstraint;
    NSLayoutConstraint * _leadingConstraint;
    NSLayoutConstraint * _topConstraint;
    NSLayoutConstraint * _trailingConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingConstraint;

+ (id)constraints;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (id)heightConstraint;
- (id)leadingConstraint;
- (void)setBottomConstraint:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setLeadingConstraint:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (id)topConstraint;
- (id)trailingConstraint;

@end
