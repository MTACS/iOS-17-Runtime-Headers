
@interface RMModelStatusAccountListSubscribedCalendar : RMModelStatusBase {
    NSString * _statusCalendarUrl;
    NSString * _statusDeclarationIdentifier;
    NSString * _statusIdentifier;
    NSNumber * _statusIsEnabled;
    NSNumber * _statusRemoved;
    NSString * _statusUsername;
    NSString * _statusVisibleName;
}

@property (nonatomic, copy) NSString *statusCalendarUrl;
@property (nonatomic, copy) NSString *statusDeclarationIdentifier;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSNumber *statusIsEnabled;
@property (nonatomic, copy) NSNumber *statusRemoved;
@property (nonatomic, copy) NSString *statusUsername;
@property (nonatomic, copy) NSString *statusVisibleName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 removed:(id)arg2 declarationIdentifier:(id)arg3 visibleName:(id)arg4 calendarUrl:(id)arg5 username:(id)arg6 isEnabled:(id)arg7;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusCalendarUrl:(id)arg1;
- (void)setStatusDeclarationIdentifier:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusIsEnabled:(id)arg1;
- (void)setStatusRemoved:(id)arg1;
- (void)setStatusUsername:(id)arg1;
- (void)setStatusVisibleName:(id)arg1;
- (id)statusCalendarUrl;
- (id)statusDeclarationIdentifier;
- (id)statusIdentifier;
- (id)statusIsEnabled;
- (id)statusRemoved;
- (id)statusUsername;
- (id)statusVisibleName;

@end
