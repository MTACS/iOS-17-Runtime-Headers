
@protocol UIButtonArchivingVisualProvider <UIButtonVisualProvider>

@required

- (NSArray *)encodableSubviews;
- (void)populateArchivedSubviews:(NSMutableSet *)arg1;

@end
