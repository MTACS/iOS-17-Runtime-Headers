
@interface TeaFoundation.BridgedDefinition : NSObject <TFDefinition> {
    void definition;
}

- (void).cxx_destruct;
- (id)inScope:(unsigned long long)arg1;
- (id)init;
- (id)withConfiguration:(id /* block */)arg1;

@end
