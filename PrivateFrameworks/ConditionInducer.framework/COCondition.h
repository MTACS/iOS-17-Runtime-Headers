
@interface COCondition : NSObject <COConditionProtocol> {
    NSArray * _additionalArguments;
}

@property (readonly) bool active;
@property (nonatomic, retain) NSArray *additionalArguments;
@property (readonly) NSString *identifierName;
@property (readonly) bool isDestructive;
@property (readonly) bool isInternalOnly;
@property (readonly) bool persistsAfterReboot;
@property (readonly) NSString *userFriendlyName;

+ (id)description;
+ (id)info;
+ (id)profileFriendlyName;

- (void).cxx_destruct;
- (bool)active;
- (id)additionalArguments;
- (bool)getBoolProperty:(id)arg1 fromDict:(id)arg2 withDefault:(bool)arg3;
- (bool)getBoolProperty:(id)arg1 withDefault:(bool)arg2;
- (id)getStringProperty:(id)arg1 fromDict:(id)arg2 withDefault:(id)arg3;
- (id)getStringProperty:(id)arg1 withDefault:(id)arg2;
- (id)identifierName;
- (id)identifierNameFromDict:(id)arg1;
- (id)init;
- (bool)isDestructive;
- (bool)isDestructiveFromDict:(id)arg1;
- (bool)isInternalOnly;
- (bool)isInternalOnlyFromDict:(id)arg1;
- (bool)persistsAfterReboot;
- (bool)persistsAfterRebootFromDict:(id)arg1;
- (void)setAdditionalArguments:(id)arg1;
- (bool)setUp;
- (void)tearDown;
- (id)userFriendlyName;
- (id)userFriendlyNameFromDict:(id)arg1;

@end
