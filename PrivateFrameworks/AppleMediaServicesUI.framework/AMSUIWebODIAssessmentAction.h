
@interface AMSUIWebODIAssessmentAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSDictionary * _additionalAttributes;
    NSString * _rawAccountType;
    NSString * _rawBundleIdentifer;
    NSString * _rawSessionIdentifer;
}

@property (nonatomic, retain) NSDictionary *additionalAttributes;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *rawAccountType;
@property (nonatomic, retain) NSString *rawBundleIdentifer;
@property (nonatomic, retain) NSString *rawSessionIdentifer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)accountTypeForString:(id)arg1;
- (id)additionalAttributes;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)rawAccountType;
- (id)rawBundleIdentifer;
- (id)rawSessionIdentifer;
- (id)runAction;
- (id)sessionIdentifierForString:(id)arg1;
- (void)setAdditionalAttributes:(id)arg1;
- (void)setRawAccountType:(id)arg1;
- (void)setRawBundleIdentifer:(id)arg1;
- (void)setRawSessionIdentifer:(id)arg1;

@end
