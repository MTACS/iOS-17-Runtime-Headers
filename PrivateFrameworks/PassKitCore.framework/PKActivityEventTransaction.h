
@interface PKActivityEventTransaction : PKActivityEvent {
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, readonly) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)eventType;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 unread:(bool)arg2;
- (bool)isEqualToActivityEvent:(id)arg1;
- (id)transaction;

@end
