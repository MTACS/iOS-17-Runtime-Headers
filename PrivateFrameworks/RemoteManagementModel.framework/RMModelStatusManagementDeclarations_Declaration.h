
@interface RMModelStatusManagementDeclarations_Declaration : RMModelPayloadBase {
    NSNumber * _statusActive;
    NSString * _statusIdentifier;
    NSArray * _statusReasons;
    NSString * _statusServerToken;
    NSString * _statusValid;
}

@property (nonatomic, copy) NSNumber *statusActive;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSArray *statusReasons;
@property (nonatomic, copy) NSString *statusServerToken;
@property (nonatomic, copy) NSString *statusValid;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2 active:(id)arg3 valid:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2 active:(id)arg3 valid:(id)arg4 reasons:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setStatusActive:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusReasons:(id)arg1;
- (void)setStatusServerToken:(id)arg1;
- (void)setStatusValid:(id)arg1;
- (id)statusActive;
- (id)statusIdentifier;
- (id)statusReasons;
- (id)statusServerToken;
- (id)statusValid;

@end
