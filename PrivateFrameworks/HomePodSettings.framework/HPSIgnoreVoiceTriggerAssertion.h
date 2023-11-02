
@interface HPSIgnoreVoiceTriggerAssertion : NSObject <HPSAssertionProtocol> {
    HPSAssertion * _assertion;
}

@property (nonatomic, retain) HPSAssertion *assertion;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)label;

- (void).cxx_destruct;
- (id)assertion;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 connectionProvider:(id)arg2;
- (void)invalidateWithCompletion:(id /* block */)arg1;
- (void)setAssertion:(id)arg1;

@end
