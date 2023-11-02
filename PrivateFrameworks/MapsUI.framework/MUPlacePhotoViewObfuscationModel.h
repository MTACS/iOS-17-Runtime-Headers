
@interface MUPlacePhotoViewObfuscationModel : NSObject {
    NSString * _providerName;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (id)initWithProviderName:(id)arg1;
- (id)providerName;
- (void)setProviderName:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;

@end
