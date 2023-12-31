
@protocol TSWPChangeSessionManager

@required

- (TSWPChangeSession *)changeSessionAuthorCreatedWithCommand:(id*)arg1;
- (bool)isTrackingChanges;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1;

@end
