
@interface ASTResponse : NSObject {
    long long  _command;
    NSString * _commandString;
    NSDictionary * _data;
    NSNumber * _progress;
    NSDictionary * _stringToCommand;
    NSNumber * _testId;
}

@property (nonatomic, readonly) long long command;
@property (nonatomic, retain) NSString *commandString;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSNumber *progress;
@property (nonatomic, retain) NSDictionary *stringToCommand;
@property (nonatomic, readonly) NSNumber *testId;

+ (id)_stringToCommand;
+ (id)responseWithDictionary:(id)arg1;
+ (id)stringFromCommand:(long long)arg1;

- (void).cxx_destruct;
- (long long)command;
- (id)commandString;
- (id)data;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)progress;
- (void)setCommandString:(id)arg1;
- (void)setStringToCommand:(id)arg1;
- (id)stringToCommand;
- (id)testId;
- (id)validateData:(id)arg1 command:(long long)arg2;
- (bool)validateResponse:(id)arg1 key:(id)arg2 expectedClass:(Class)arg3;
- (bool)validateTestId:(id)arg1 command:(long long)arg2;

@end
