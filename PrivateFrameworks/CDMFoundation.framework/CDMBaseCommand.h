
@interface CDMBaseCommand : NSObject <CDMCommand> {
    NSError * _cmdError;
    NSString * _uuid;
}

@property (nonatomic, retain) NSError *cmdError;
@property (nonatomic, readonly) NSString *commandName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)commandName;

- (void).cxx_destruct;
- (id)cmdError;
- (id)commandName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCmdError:(id)arg1;
- (id)uuid;

@end
