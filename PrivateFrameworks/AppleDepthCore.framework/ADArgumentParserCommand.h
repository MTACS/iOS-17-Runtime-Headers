
@interface ADArgumentParserCommand : NSObject {
    NSString * _descriptionString;
    <ADArgumentParserCommandHandler> * _handler;
    NSString * _name;
    NSMutableArray * _optionalArguments;
    NSMutableArray * _positionalArguments;
    NSString * _preParsedPrefix;
    NSString * _programName;
    NSMutableArray * _subCommands;
}

@property (nonatomic, retain) NSString *descriptionString;
@property (nonatomic, retain) <ADArgumentParserCommandHandler> *handler;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)addDescription:(id)arg1;
- (void)addOptionalArgument:(id)arg1;
- (void)addPositionalArgument:(id)arg1;
- (void)addSubCommand:(id)arg1 withName:(SEL)arg2 description:(id)arg3;
- (void)addSubCommand:(id)arg1 withName:(id)arg2 description:(id)arg3 handler:(id)arg4;
- (bool)checkIfName:(id)arg1 notInList:(id)arg2;
- (bool)commandParse:(id)arg1 commandIndex:(unsigned int)arg2;
- (id)descriptionString;
- (id)fullUsageWithPrefix:(id)arg1;
- (id)handler;
- (id)init;
- (id)name;
- (bool)parseSubCommand:(id)arg1 commandIndex:(unsigned int)arg2;
- (bool)parseUsingDocopt:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setName:(id)arg1;
- (id)shortUsageWithPrefix:(id)arg1;
- (id)subCommandsUsageWithPrefix:(id)arg1;
- (id)usage;
- (bool)verifyArgumentsForClass;
- (bool)verifyCommandStructure;
- (bool)verifyInputs;
- (bool)verifyNoArgumentDuplications;
- (bool)verifySingleArgName:(id)arg1 ofType:(unsigned long long)arg2;

@end
