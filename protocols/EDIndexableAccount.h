
@protocol EDIndexableAccount <ECMailAccount>

@required

+ (NSString *)csAccountTypeString;

- (ECAccount *)baseAccount;
- (bool)isManaged;

@end
