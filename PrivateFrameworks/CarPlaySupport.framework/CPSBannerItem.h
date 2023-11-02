
@interface CPSBannerItem : NSObject {
    NSArray * _attributedDetailTextVariants;
    NSString * _bundleIdentifier;
    NSArray * _detailTextVariants;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    NSArray * _textVariants;
}

@property (nonatomic, readonly) NSArray *attributedDetailTextVariants;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSArray *detailTextVariants;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) CPImageSet *imageSet;
@property (nonatomic, readonly) NSArray *textVariants;

- (void).cxx_destruct;
- (id)attributedDetailTextVariants;
- (id)bundleIdentifier;
- (id)description;
- (id)detailTextVariants;
- (id)identifier;
- (id)imageSet;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 attributedDetailTextVariants:(id)arg5 imageSet:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBannerItem:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)textVariants;

@end
