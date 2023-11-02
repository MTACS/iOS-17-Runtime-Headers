
@interface _VOSProfileSecondaryCommand : NSObject <NSSecureCoding> {
    VOSCommand * _command;
    unsigned long long  _context;
    unsigned long long  _pressCount;
    _VOSProfileCommand * _primaryProfileCommand;
}

@property (nonatomic, retain) VOSCommand *command;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long pressCount;
@property (nonatomic) _VOSProfileCommand *primaryProfileCommand;

+ (id)profileSecondaryCommandWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
+ (id)profileSecondaryCommandWithStringValue:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
- (id)command;
- (unsigned long long)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)pressCount;
- (id)primaryProfileCommand;
- (void)setCommand:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setPressCount:(unsigned long long)arg1;
- (void)setPrimaryProfileCommand:(id)arg1;

@end
