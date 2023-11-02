
@interface AMSFinanceResponse : NSObject {
    AMSFinanceAuthenticateResponse * _cachedAuthenticateResponse;
    AMSFinanceDialogResponse * _cachedDialogResponse;
    AMSFinancePaymentSheetResponse * _cachedPaymentSheetResponse;
    long long  _dialogKind;
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, retain) AMSFinanceAuthenticateResponse *cachedAuthenticateResponse;
@property (nonatomic, retain) AMSFinanceDialogResponse *cachedDialogResponse;
@property (nonatomic, retain) AMSFinancePaymentSheetResponse *cachedPaymentSheetResponse;
@property (nonatomic, readonly) long long dialogKind;
@property (nonatomic, readonly) NSArray *pingURLs;
@property (nonatomic, retain) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSError *serverError;
@property (nonatomic, readonly) bool supportedProtocolVersion;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic, readonly) NSURL *versionMismatchURL;

+ (id)valueForProtocolKey:(id)arg1 inResponse:(id)arg2;

- (void).cxx_destruct;
- (id)_performerForActionDictionary;
- (id)_performerForAuthenticate;
- (id)_performerForCreditDisplay;
- (id)_performerForDialog;
- (id)_performerForExpressCheckout;
- (id)_performerForPaymentSheetWithDelegateAuthentication:(bool)arg1;
- (id)_valueForProtocolKey:(id)arg1;
- (id)account;
- (id)actions;
- (id)cachedAuthenticateResponse;
- (id)cachedDialogResponse;
- (id)cachedPaymentSheetResponse;
- (long long)dialogKind;
- (id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (id)pingURLs;
- (id)responseDictionary;
- (id)serverError;
- (void)setCachedAuthenticateResponse:(id)arg1;
- (void)setCachedDialogResponse:(id)arg1;
- (void)setCachedPaymentSheetResponse:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (bool)supportedProtocolVersion;
- (id)taskInfo;
- (id)versionMismatchURL;

@end
