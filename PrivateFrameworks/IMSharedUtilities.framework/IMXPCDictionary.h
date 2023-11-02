
@interface IMXPCDictionary : IMXPCObject

+ (struct _xpc_type_s { }*)type;

- (id)dictionaryForKey:(const char *)arg1;
- (id)initWithDictionary:(id)arg1 key:(const char *)arg2;

@end
