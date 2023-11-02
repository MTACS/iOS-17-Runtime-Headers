
@interface FSMessageReceiverDelegate : NSObject <FSTaskOps> {
    NSObject<FSTaskMessageOps> * _delegate;
    NSLocale * _locale;
    NSArray * _preferredLanguages;
}

@property (readonly) NSObject<FSTaskMessageOps> *delegate;
@property (readonly) NSLocale *locale;
@property (readonly) NSArray *preferredLanguages;

- (void).cxx_destruct;
- (void)completed:(id)arg1 reply:(id /* block */)arg2;
- (id)delegate;
- (void)getLocalizationSetup:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 Locale:(id)arg2 preferredLanguages:(id)arg3;
- (id)locale;
- (void)logMessage:(id)arg1;
- (id)preferredLanguages;
- (void)prompt:(id)arg1 reply:(id /* block */)arg2;
- (void)promptTrueFalse:(id)arg1 reply:(id /* block */)arg2;

@end
