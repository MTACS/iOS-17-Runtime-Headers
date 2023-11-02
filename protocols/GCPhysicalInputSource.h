
@protocol GCPhysicalInputSource <NSObject>

@required

- (unsigned long long)direction;
- (NSSet *)elementAliases;
- (NSString *)elementLocalizedName;
- (NSString *)sfSymbolsName;

@end
