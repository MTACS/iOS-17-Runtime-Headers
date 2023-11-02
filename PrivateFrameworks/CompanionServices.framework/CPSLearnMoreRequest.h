
@interface CPSLearnMoreRequest : CPSAuthenticationRequest <NSSecureCoding> {
    NSURL * _URL;
    UIImage * _image;
    NSString * _subtitleText;
    NSString * _titleText;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *subtitleText;
@property (nonatomic, retain) NSString *titleText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (long long)authType;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setURL:(id)arg1;
- (id)subtitleText;
- (id)titleText;

@end
