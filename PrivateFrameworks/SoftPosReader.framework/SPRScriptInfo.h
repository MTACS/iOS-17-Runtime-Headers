
@interface SPRScriptInfo : NSObject {
    unsigned int  _apduCount;
    unsigned long long  _scriptID;
    NSString * _scriptName;
}

@property (nonatomic, readonly) unsigned int apduCount;
@property (nonatomic, readonly) unsigned long long scriptID;
@property (nonatomic, readonly) NSString *scriptName;

- (void).cxx_destruct;
- (unsigned int)apduCount;
- (id)initWithScriptID:(unsigned long long)arg1 scriptName:(id)arg2 apduCount:(unsigned int)arg3;
- (unsigned long long)scriptID;
- (id)scriptName;

@end
