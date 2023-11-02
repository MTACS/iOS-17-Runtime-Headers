
@interface SiriAnalyticsFBFStorage : NSObject {
    void applicationIdentifier;
    void telemetry;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithApplicationIdentifier:(id)arg1 telemetry:(id)arg2;
- (void)store:(id)arg1 completion:(id /* block */)arg2;

@end
