
@interface CKVDatabaseCommand : NSObject <NSCopying> {
    NSString * _commandString;
    NSArray * _parameters;
}

@property (nonatomic, readonly) NSString *commandString;
@property (nonatomic, readonly) NSArray *parameters;

- (void).cxx_destruct;
- (id)commandString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCommandString:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommand:(id)arg1;
- (id)parameters;
- (void)replaceParameters:(id)arg1;
- (bool)updateCommandString:(id)arg1;
- (bool)updateParameters:(id)arg1;

@end
