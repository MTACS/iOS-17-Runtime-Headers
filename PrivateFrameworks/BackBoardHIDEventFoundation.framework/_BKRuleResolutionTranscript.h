
@interface _BKRuleResolutionTranscript : NSObject {
    long long  _indentLevel;
    NSMutableString * _string;
}

- (void).cxx_destruct;
- (void)_appendIndent;
- (void)_appendIndentedItemWithPrefix:(id)arg1 label:(id)arg2 args:(char *)arg3;
- (void)appendEnvironment:(id)arg1;
- (void)appendFailure:(id)arg1;
- (void)appendItem:(id)arg1;
- (void)appendMatch:(id)arg1;
- (void)appendRejection:(id)arg1;
- (void)appendResolution:(id)arg1;
- (void)appendSection:(id)arg1;
- (id)build;
- (id)init;
- (void)popSection;
- (void)pushSection;
- (void)restoreSection:(id)arg1;
- (id)saveSection;

@end
