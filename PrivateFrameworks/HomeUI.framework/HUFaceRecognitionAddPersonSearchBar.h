
@interface HUFaceRecognitionAddPersonSearchBar : UIView <HUSearchBar> {
    NSArray * _constraints;
    UIImageView * _faceCropView;
    UITextField * _searchTextField;
    UIView * _separatorView;
}

@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImageView *faceCropView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextField *searchTextField;
@property (nonatomic, readonly) UIView *separatorView;
@property (readonly) Class superclass;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)constraints;
- (id)faceCropView;
- (id)init;
- (void)layoutSubviews;
- (id)searchTextField;
- (id)separatorView;
- (void)setConstraints:(id)arg1;
- (void)updateConstraints;

@end
