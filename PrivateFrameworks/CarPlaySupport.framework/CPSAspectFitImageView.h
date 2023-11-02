
@interface CPSAspectFitImageView : UIImageView {
    NSLayoutConstraint * _aspectConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *aspectConstraint;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (id)aspectConstraint;
- (id)init;
- (void)setAspectConstraint:(id)arg1;
- (void)setImage:(id)arg1;

@end
