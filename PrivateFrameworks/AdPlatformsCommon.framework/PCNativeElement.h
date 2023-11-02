
@interface PCNativeElement : NSObject <NSSecureCoding> {
    NSString * _accessibleCaption;
    NSURL * _actionURL;
    PCNativeAsset * _asset;
    PCNativeButton * _button;
    NSString * _caption;
    long long  _elementID;
    PCNativeStyle * _style;
}

@property (nonatomic, retain) NSString *accessibleCaption;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) PCNativeAsset *asset;
@property (nonatomic, retain) PCNativeButton *button;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic) long long elementID;
@property (nonatomic, retain) PCNativeStyle *style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibleCaption;
- (id)actionURL;
- (id)asset;
- (id)button;
- (id)caption;
- (long long)elementID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccessibleCaption:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setElementID:(long long)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
