
@protocol ATXIntentMetadataCacheInvalidationDelegate

@required

- (void)applicationsDidUninstall:(NSSet *)arg1;
- (void)applicationsDidUpdate:(NSSet *)arg1;
- (void)systemDidUpdate;

@end
