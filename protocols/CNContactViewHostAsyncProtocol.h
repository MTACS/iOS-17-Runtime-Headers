
@protocol CNContactViewHostAsyncProtocol <CNContactViewHostProtocol>

@required

- (void)asyncShouldPerformDefaultActionForContact:(CNContact *)arg1 propertyKey:(NSString *)arg2 propertyIdentifier:(NSString *)arg3;

@end
