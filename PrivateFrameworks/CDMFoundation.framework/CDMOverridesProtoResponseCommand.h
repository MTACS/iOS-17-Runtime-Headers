
@interface CDMOverridesProtoResponseCommand : CDMBaseCommand {
    NSArray * _parsesForAppending;
    NSArray * _parsesForReplacement;
}

@property (nonatomic, retain) NSArray *parsesForAppending;
@property (nonatomic, retain) NSArray *parsesForReplacement;

- (void).cxx_destruct;
- (id)initWithParsesForReplacement:(id)arg1 parsesForAppending:(id)arg2;
- (id)parsesForAppending;
- (id)parsesForReplacement;
- (void)setParsesForAppending:(id)arg1;
- (void)setParsesForReplacement:(id)arg1;

@end
