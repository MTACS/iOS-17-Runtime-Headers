
@interface ACUISActivityAlertOptions : NSObject {
    TLAlertConfiguration * _alertConfiguration;
    ACAlertPresentationOptions * _presentationOptions;
}

@property (nonatomic, readonly) TLAlertConfiguration *alertConfiguration;
@property (nonatomic, readonly) ACAlertPresentationOptions *presentationOptions;

- (void).cxx_destruct;
- (id)alertConfiguration;
- (id)initWithAlertConfiguration:(id)arg1 presentationOptions:(id)arg2;
- (id)presentationOptions;

@end
