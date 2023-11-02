
@interface CDPDRecoveryOption : NSObject {
    NSString * _localizedRecoveryOption;
    id /* block */  _recoveryHandler;
    long long  _recoveryOptionIndex;
    NSString * _telemetryRecoveryOption;
}

@property (nonatomic, copy) NSString *localizedRecoveryOption;
@property (nonatomic, copy) id /* block */ recoveryHandler;
@property (nonatomic) long long recoveryOptionIndex;
@property (nonatomic, copy) NSString *telemetryRecoveryOption;

- (void).cxx_destruct;
- (id)localizedRecoveryOption;
- (id /* block */)recoveryHandler;
- (long long)recoveryOptionIndex;
- (void)setLocalizedRecoveryOption:(id)arg1;
- (void)setRecoveryHandler:(id /* block */)arg1;
- (void)setRecoveryOptionIndex:(long long)arg1;
- (void)setTelemetryRecoveryOption:(id)arg1;
- (id)telemetryRecoveryOption;

@end
