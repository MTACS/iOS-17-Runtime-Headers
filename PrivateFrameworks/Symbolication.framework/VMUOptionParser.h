
@interface VMUOptionParser : NSObject {
    bool  _abortOnError;
    NSMutableArray * _appleInternalOptionDescriptions;
    NSString * _discussionDescription;
    struct __CFArray { } * _longOptStructs;
    NSMutableDictionary * _optionBlockByString;
    NSMutableArray * _optionDescriptions;
    bool  _parametersShowAsAssignment;
    NSString * _purposeDescription;
    NSMutableString * _shortOpts;
    bool  _singleHyphenLongNames;
    unsigned long long  _spacing;
    NSString * _syntaxDescription;
}

@property (nonatomic) bool abortOnError;
@property (nonatomic, copy) NSString *discussion;
@property (readonly) int optind;
@property (nonatomic) bool parametersShowAsAssignment;
@property (nonatomic, copy) NSString *purposeDescription;
@property (nonatomic) bool singleHyphenLongNames;
@property (nonatomic, copy) NSString *syntaxDescription;

- (void).cxx_destruct;
- (bool)abortOnError;
- (void)dealloc;
- (id)discussion;
- (id)init;
- (int)optind;
- (bool)parametersShowAsAssignment;
- (id)parseArguments:(char **)arg1 withBlock:(id /* block */)arg2;
- (id)parseArgumentsArray:(id)arg1 withBlock:(id /* block */)arg2;
- (void)printOptionDescriptions:(id)arg1;
- (id)purposeDescription;
- (void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 flags:(unsigned long long)arg6 handler:(id /* block */)arg7;
- (void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 handler:(id /* block */)arg6;
- (void)setAbortOnError:(bool)arg1;
- (void)setDiscussion:(id)arg1;
- (void)setParametersShowAsAssignment:(bool)arg1;
- (void)setPurposeDescription:(id)arg1;
- (void)setSingleHyphenLongNames:(bool)arg1;
- (void)setSyntaxDescription:(id)arg1;
- (bool)singleHyphenLongNames;
- (id)syntaxDescription;
- (void)usage:(id)arg1;
- (void)usage:(id)arg1 shouldExit:(bool)arg2;

@end
