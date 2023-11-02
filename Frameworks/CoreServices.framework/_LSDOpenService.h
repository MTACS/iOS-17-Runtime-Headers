
@interface _LSDOpenService : _LSDService

+ (id)XPCInterface;
+ (Class)clientClass;
+ (unsigned short)connectionType;

- (id)initWithXPCListener:(id)arg1;

@end
