
@interface SFCapsuleNavigationBarIconLayoutInfo : NSObject {
    NSArray * _constraintsToItemBefore;
    UIImageView * _imageView;
}

@property (nonatomic, retain) NSArray *constraintsToItemBefore;
@property (nonatomic, readonly) UIImageView *imageView;

- (void).cxx_destruct;
- (id)constraintsToItemBefore;
- (id)imageView;
- (id)initWithImageView:(id)arg1;
- (void)setConstraintsToItemBefore:(id)arg1;

@end
