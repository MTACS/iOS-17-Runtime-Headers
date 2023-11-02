
@interface AMSUIWebFetchTelephonyAction : AMSUIWebAction {
    bool  _suppressPhoneNumber;
}

@property (nonatomic) bool suppressPhoneNumber;

- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setSuppressPhoneNumber:(bool)arg1;
- (bool)suppressPhoneNumber;

@end
