
@interface CHSServerSubscriptionResult : NSObject {
    <BSInvalidatable> * _assertion;
    NSError * _error;
    NSObject * _value;
}

@property (nonatomic, retain) <BSInvalidatable> *assertion;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSObject *value;

- (void).cxx_destruct;
- (id)assertion;
- (id)error;
- (void)setAssertion:(id)arg1;
- (void)setError:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
