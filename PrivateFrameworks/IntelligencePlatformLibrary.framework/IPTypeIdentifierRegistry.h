
@interface IPTypeIdentifierRegistry : NSObject

+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)arg1 error:(id*)arg2;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (bool)isValidFieldIdentifier:(unsigned short)arg1;
+ (bool)isValidItemIdentifier:(unsigned short)arg1;
+ (bool)isValidMessageIdentifier:(unsigned short)arg1;
+ (unsigned short)itemIdentifierForFieldIdentifier:(unsigned short)arg1 error:(id*)arg2;
+ (Class)itemMessageSubclassForFieldIdentifier:(unsigned short)arg1;
+ (Class)itemMessageSubclassForIdentifier:(unsigned short)arg1;
+ (Class)itemMessageSubclassForItemIdentifier:(unsigned short)arg1;
+ (Class)itemMessageSubclassForMessageIdentifier:(unsigned short)arg1;
+ (unsigned short)messageIdentifierForFieldIdentifier:(unsigned short)arg1 error:(id*)arg2;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)arg1 error:(id*)arg2;

@end
