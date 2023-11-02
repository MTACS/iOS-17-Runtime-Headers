
@interface CDMFoundation.CDMUaaPNLOverridesProxy : NSObject {
    void overrideParseProbability;
    void store;
    void uaaPOverridesLog;
}

- (void).cxx_destruct;
- (bool)addWithCollection:(id)arg1;
- (bool)cleanWithOverrideNamespace:(int)arg1;
- (id)init;
- (id)initWithUseMemory:(bool)arg1;
- (id)matchWithInputs:(id)arg1 overrideNamespace:(int)arg2;

@end
