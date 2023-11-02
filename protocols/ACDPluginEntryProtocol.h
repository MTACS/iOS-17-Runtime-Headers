
@protocol ACDPluginEntryProtocol

@required

- (NSString *)identifier;
- (id)principalObject;
- (bool)principalObjectRespondsToSelector:(SEL)arg1;
- (NSSet *)supportedAccountTypes;
- (NSSet *)supportedDataclasses;

@end
