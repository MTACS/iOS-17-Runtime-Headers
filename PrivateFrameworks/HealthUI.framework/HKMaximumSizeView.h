
@interface HKMaximumSizeView : UIView {
    NSArray * _hardHorizontalConstraints;
    NSArray * _hardVerticalConstraints;
    NSLayoutConstraint * _maximumHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    NSLayoutConstraint * _maximumWidthConstraint;
    NSArray * _softHorizontalConstraints;
    NSArray * _softVerticalConstraints;
}

@property (nonatomic, retain) NSArray *hardHorizontalConstraints;
@property (nonatomic, retain) NSArray *hardVerticalConstraints;
@property (nonatomic, retain) NSLayoutConstraint *maximumHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, retain) NSLayoutConstraint *maximumWidthConstraint;
@property (nonatomic, retain) NSArray *softHorizontalConstraints;
@property (nonatomic, retain) NSArray *softVerticalConstraints;

- (void).cxx_destruct;
- (void)_buildConstraintsForView:(id)arg1;
- (void)_setConstraints:(id)arg1 active:(bool)arg2;
- (id)hardHorizontalConstraints;
- (id)hardVerticalConstraints;
- (id)initWithView:(id)arg1 maximumSize:(struct CGSize { double x1; double x2; })arg2;
- (id)maximumHeightConstraint;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)maximumWidthConstraint;
- (void)setHardHorizontalConstraints:(id)arg1;
- (void)setHardVerticalConstraints:(id)arg1;
- (void)setMaximumHeightConstraint:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaximumWidthConstraint:(id)arg1;
- (void)setSoftHorizontalConstraints:(id)arg1;
- (void)setSoftVerticalConstraints:(id)arg1;
- (id)softHorizontalConstraints;
- (id)softVerticalConstraints;

@end
