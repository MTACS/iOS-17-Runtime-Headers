
@interface _ATXScoreInterpreter : NSObject {
    NSDictionary * _bytecode;
    NSMutableArray * _bytecodeDependencies;
}

@property (nonatomic, readonly) NSSet *subscoreNames;

- (void).cxx_destruct;
- (id)evaluateWithInputScoreDict:(id)arg1 intentType:(id)arg2;
- (id)evaluateWithInputScores:(id)arg1 intentType:(id)arg2;
- (id)initWithParseRoot:(id)arg1;
- (id)subscoreNames;

@end
