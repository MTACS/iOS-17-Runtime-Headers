
@protocol GCPhysicalInputElement <NSObject>

@required

- (NSSet *)aliases;
- (NSString *)localizedName;
- (NSString *)sfSymbolsName;

@end
