
@interface ADArgumentParser : ADArgumentParserCommand {
    NSString * _programDescription;
}

- (void).cxx_destruct;
- (void)addProgramDescription:(id)arg1;
- (bool)parse;
- (bool)parseArguments:(id)arg1;
- (bool)parseStringCommand:(id)arg1;

@end
