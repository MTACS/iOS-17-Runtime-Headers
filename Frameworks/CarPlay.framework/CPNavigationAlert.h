
@interface CPNavigationAlert : NSObject <NSSecureCoding> {
    double  _duration;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    <CPNavigationAlertUpdating> * _navigationAlertUpdateTarget;
    CPAlertAction * _primaryAction;
    CPAlertAction * _secondaryAction;
    NSArray * _subtitleVariants;
    NSArray * _titleVariants;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) CPImageSet *imageSet;
@property (nonatomic) <CPNavigationAlertUpdating> *navigationAlertUpdateTarget;
@property (nonatomic, readonly) CPAlertAction *primaryAction;
@property (nonatomic, readonly) CPAlertAction *secondaryAction;
@property (nonatomic, readonly, copy) NSArray *subtitleVariants;
@property (nonatomic, readonly, copy) NSArray *titleVariants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 imageSet:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 imageSet:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6;
- (id)navigationAlertUpdateTarget;
- (id)primaryAction;
- (id)secondaryAction;
- (void)setIdentifier:(id)arg1;
- (void)setNavigationAlertUpdateTarget:(id)arg1;
- (id)subtitleVariants;
- (id)titleVariants;
- (void)updateTitleVariants:(id)arg1 subtitleVariants:(id)arg2;

@end
