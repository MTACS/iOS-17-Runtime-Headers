
@interface ECEmailAddressParser : NSObject

+ (bool)_validateString:(id)arg1 withFunction:(int (*)arg2;
+ (bool)parseEmailAddressString:(id)arg1 displayName:(id*)arg2 localPart:(id*)arg3 domain:(id*)arg4 groupList:(id*)arg5;
+ (bool)parseString:(id)arg1 emailAddressList:(id*)arg2;
+ (bool)validateDisplayName:(id)arg1;
+ (bool)validateDomain:(id)arg1;
+ (bool)validateLocalPart:(id)arg1;

@end
