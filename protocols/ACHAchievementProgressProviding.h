
@protocol ACHAchievementProgressProviding <NSObject>

@required

- (NSString *)providerIdentifier;
- (bool)providesProgressForTemplate:(ACHTemplate *)arg1;
- (void)requestAchievementProgressUpdatesForTemplates:(NSArray *)arg1;

@end
