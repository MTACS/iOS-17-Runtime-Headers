
@interface ICQInternetPrivacyBannerModel : NSObject {
    NSString * _buttonTitle;
    NSString * _message;
    NSString * _networkName;
    unsigned long long  _status;
    NSString * _title;
}

@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic) unsigned long long status;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)buttonTitle;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 status:(unsigned long long)arg4 networkName:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)networkName;
- (void)setButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)status;
- (id)title;

@end
