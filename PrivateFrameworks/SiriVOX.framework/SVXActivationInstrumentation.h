
@interface SVXActivationInstrumentation : NSObject {
    unsigned long long  _buttonDownTimestamp;
    NSUUID * _turnIdentifier;
}

@property (nonatomic, readonly) unsigned long long buttonDownTimestamp;
@property (nonatomic, readonly) NSUUID *turnIdentifier;

- (void).cxx_destruct;
- (unsigned long long)buttonDownTimestamp;
- (id)initWithTurnIdentifier:(id)arg1 buttonTimestamp:(unsigned long long)arg2;
- (id)turnIdentifier;

@end
