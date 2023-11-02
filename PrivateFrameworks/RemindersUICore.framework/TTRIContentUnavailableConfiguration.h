
@interface TTRIContentUnavailableConfiguration : TTRIUIContentUnavailableShim <UIContentConfiguration>

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) TTRIContentUnavailableButtonProperties *buttonProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSAttributedString *secondaryAttributedText;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, readonly) TTRIContentUnavailableTextProperties *secondaryTextProperties;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) TTRIContentUnavailableTextProperties *textProperties;

+ (id)emptyConfiguration;
+ (id)emptyProminentConfiguration;
+ (Class)implClass;
+ (id)loadingConfiguration;
+ (id)searchConfiguration;

- (id)asUIKit;
- (id)attributedText;
- (id)buttonProperties;
- (id)image;
- (id)makeContentView;
- (id)secondaryAttributedText;
- (id)secondaryText;
- (id)secondaryTextProperties;
- (void)setAttributedText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondaryAttributedText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textProperties;
- (id)updatedConfigurationForState:(id)arg1;

@end
