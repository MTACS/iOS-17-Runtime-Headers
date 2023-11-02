
@protocol ANDefaultsProtocol

@required

- (bool)boolForDefault:(NSString *)arg1;
- (NSNumber *)numberForDefault:(NSString *)arg1;
- (id)objectForDefault:(NSString *)arg1;
- (void)setBool:(bool)arg1 forDefault:(NSString *)arg2;
- (void)setNumber:(NSNumber *)arg1 forDefault:(NSString *)arg2;
- (void)setObject:(id)arg1 forDefault:(NSString *)arg2;

@end
