
@interface CLTOption : NSObject {
    bool  _allowsNegativeNumbersAsArguments;
    NSString * _argumentHelp;
    NSMutableArray * _consumedArguments;
    NSArray * _defaultArguments;
    NSString * _lefthandHelp;
    NSArray * _longforms;
    int  _maxAllowedOccurencies;
    int  _maxConsumedArguments;
    int  _minConsumedArguments;
    int  _occurencies;
    NSString * _righthandHelp;
    NSArray * _shorthands;
    id /* block */  _triggerAction;
}

@property (nonatomic) bool allowsNegativeNumbersAsArguments;
@property (nonatomic, retain) NSString *argumentHelp;
@property (nonatomic, retain) NSMutableArray *consumedArguments;
@property (nonatomic, readonly) NSArray *consumedOrDefaultArguments;
@property (nonatomic, retain) NSArray *defaultArguments;
@property (nonatomic, readonly) NSString *lefthandHelp;
@property (nonatomic, readonly) NSArray *longforms;
@property (nonatomic) int maxAllowedOccurencies;
@property (nonatomic) int maxConsumedArguments;
@property (nonatomic) int minConsumedArguments;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic) int occurencies;
@property (nonatomic, retain) NSString *righthandHelp;
@property (nonatomic, readonly) NSArray *shorthands;
@property (nonatomic, copy) id /* block */ triggerAction;

- (void).cxx_destruct;
- (void)addLongform:(id)arg1;
- (void)addShorthand:(id)arg1;
- (bool)allowsNegativeNumbersAsArguments;
- (id)argumentHelp;
- (bool)consumeArgument:(id)arg1;
- (id)consumedArguments;
- (id)consumedOrDefaultArguments;
- (id)defaultArguments;
- (id)init;
- (id)lefthandHelp;
- (id)longforms;
- (int)maxAllowedOccurencies;
- (int)maxConsumedArguments;
- (int)minConsumedArguments;
- (id)numberValue;
- (int)occurencies;
- (id)righthandHelp;
- (void)setAllowsNegativeNumbersAsArguments:(bool)arg1;
- (void)setArgumentHelp:(id)arg1;
- (void)setConsumedArguments:(id)arg1;
- (void)setDefaultArguments:(id)arg1;
- (void)setMaxAllowedOccurencies:(int)arg1;
- (void)setMaxConsumedArguments:(int)arg1;
- (void)setMinConsumedArguments:(int)arg1;
- (void)setOccurencies:(int)arg1;
- (void)setRighthandHelp:(id)arg1;
- (void)setTriggerAction:(id /* block */)arg1;
- (id)shorthands;
- (id /* block */)triggerAction;

@end
