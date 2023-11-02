
@protocol _CDContextPersisting

@required

- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(NSDate *)arg1;
- (void)deleteRegistration:(_CDContextualChangeRegistration *)arg1;
- (NSArray *)loadRegistrations;
- (NSDictionary *)loadValues;
- (void)saveRegistration:(_CDContextualChangeRegistration *)arg1;
- (void)saveValue:(_CDContextValue *)arg1 forKeyPath:(_CDContextualKeyPath *)arg2;

@end
