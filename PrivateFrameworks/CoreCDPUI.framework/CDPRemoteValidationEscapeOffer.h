
@interface CDPRemoteValidationEscapeOffer : NSObject <CDPInitUnavailable> {
    CDPContext * _cdpContext;
    NSString * _deviceSessionID;
    NSString * _escapeOfferName;
    NSMutableArray * _escapeOptions;
    NSString * _flowID;
    NSString * _message;
    UIViewController * _presentingViewController;
    NSString * _title;
    NSString * _titleTelemetryKey;
}

@property (nonatomic, copy) NSString *deviceSessionID;
@property (nonatomic, retain) NSString *escapeOfferName;
@property (nonatomic, copy) NSString *flowID;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) NSString *titleTelemetryKey;

- (void).cxx_destruct;
- (id)_actionFromEscapeOption:(id)arg1;
- (id)_makeEventForEscapeOfferPresentedWithOptions:(id)arg1;
- (id)_makeEventForEscapeOptionSelectedWithKey:(id)arg1;
- (void)_performActionForEscapeOption:(id)arg1;
- (long long)_styleForEscapeOption:(id)arg1;
- (void)addEscapeOptionsObject:(id)arg1;
- (id)deviceSessionID;
- (void)dismissOfferAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)escapeOfferName;
- (id)escapeOptions;
- (id)flowID;
- (void)handleEscapeAction:(id)arg1;
- (id)initWithCDPContext:(id)arg1;
- (id)message;
- (id)presentingViewController;
- (void)setDeviceSessionID:(id)arg1;
- (void)setEscapeOfferName:(id)arg1;
- (void)setFlowID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTelemetryKey:(id)arg1;
- (id)title;
- (id)titleTelemetryKey;

@end
