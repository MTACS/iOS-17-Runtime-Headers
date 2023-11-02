
@interface AKLoginRowData : NSObject <_ASAuthenticationProviderLoginRowData> {
    long long  _authenticationType;
    NSString * _detailText;
    UIImage * _iconImage;
    NSString * _paneTitleText;
    NSString * _titleText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long loginRowAuthenticationType;
@property (nonatomic, copy) NSString *loginRowDetailText;
@property (nonatomic, copy) UIImage *loginRowIconImage;
@property (nonatomic, copy) NSString *loginRowPaneTitleText;
@property (nonatomic, copy) NSString *loginRowText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIconImage:(id)arg1 paneTitleText:(id)arg2 titleText:(id)arg3 detailText:(id)arg4 authenticationType:(long long)arg5;
- (long long)loginRowAuthenticationType;
- (id)loginRowDetailText;
- (id)loginRowIconImage;
- (id)loginRowPaneTitleText;
- (id)loginRowText;
- (void)setLoginRowAuthenticationType:(long long)arg1;
- (void)setLoginRowDetailText:(id)arg1;
- (void)setLoginRowIconImage:(id)arg1;
- (void)setLoginRowPaneTitleText:(id)arg1;
- (void)setLoginRowText:(id)arg1;

@end
