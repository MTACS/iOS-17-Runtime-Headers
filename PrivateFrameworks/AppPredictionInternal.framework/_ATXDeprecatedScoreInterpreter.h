
@interface _ATXDeprecatedScoreInterpreter : NSObject {
    NSDictionary * _varPrograms;
}

@property (nonatomic, readonly) unsigned long long instructionCount;
@property (nonatomic, readonly) NSSet *subscoreNames;

- (void).cxx_destruct;
- (void)_compileRoot:(id)arg1;
- (double)_evalVariable:(id)arg1 withCtx:(id)arg2;
- (id)evaluateWithInputScoreDict:(id)arg1 intentType:(id)arg2;
- (id)evaluateWithInputScores:(id)arg1 intentType:(id)arg2;
- (id)initWithParseRoot:(id)arg1;
- (unsigned long long)instructionCount;
- (id)subscoreNames;

@end
