
@interface ECMessageBodyHTMLParser : ECMessageBodyParser {
    NSScanner * _scanner;
}

- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (void)_findBody;
- (bool)_isMilestoneTagName:(id)arg1;
- (void)dealloc;
- (void)didFindError:(id)arg1;
- (id)initWithHTML:(id)arg1;
- (Class)messageBodyElementClass;
- (unsigned long long)messageBodyStringAccumulatorDefaultOptions;
- (bool)parse;

@end
