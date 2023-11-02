
@protocol FASpecifierProtocol <NSObject>

@required

- (long long)cellType;
- (NSString *)identifier;
- (NSString *)name;
- (void)performButtonAction;
- (id)propertyForKey:(NSString *)arg1;
- (void)setCellType:(long long)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setProperty:(id)arg1 forKey:(NSString *)arg2;

@end
