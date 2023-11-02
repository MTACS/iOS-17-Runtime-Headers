
@interface CNVCardInstantMessagingLineGenerator : CNVCardLineGenerator

+ (id)instantMessageUsernameWithSchemeForUsername:(id)arg1 service:(id)arg2;
+ (id)serviceTypeStringForInstantMessageService:(id)arg1;

- (id)lineWithValue:(id)arg1 label:(id)arg2;
- (id)makeLineWithName:(id)arg1 value:(id)arg2;
- (id)standardLabelsForLabel:(id)arg1;

@end
