
@interface MapsEdgeConstraints : NSObject {
    NSLayoutConstraint * _bottomConstraint;
    NSLayoutConstraint * _leadingConstraint;
    NSLayoutConstraint * _leftConstraint;
    NSLayoutConstraint * _rightConstraint;
    NSLayoutConstraint * _topConstraint;
    NSLayoutConstraint * _trailingConstraint;
}

@property (nonatomic, readonly) NSArray *allConstraints;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *rightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingConstraint;

+ (id)edgeConstraintsWithTop:(id)arg1 leading:(id)arg2 bottom:(id)arg3 trailing:(id)arg4;

- (void).cxx_destruct;
- (id)allConstraints;
- (id)bottomConstraint;
- (id)leadingConstraint;
- (id)leftConstraint;
- (id)rightConstraint;
- (void)setBottomConstraint:(id)arg1;
- (void)setLeadingConstraint:(id)arg1;
- (void)setLeftConstraint:(id)arg1;
- (void)setRightConstraint:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (id)topConstraint;
- (id)trailingConstraint;

@end
