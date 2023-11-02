
@protocol SBBackgroundActivityAssertionServer <NSObject>

@required

- (void)activateBackgroundActivityAssertions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)deactivateBackgroundActivityAssertionsWithIdentifiers:(NSSet *)arg1;
- (void)setRegisteredBackgroundActivityIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setStatusString:(NSString *)arg1 forAssertionWithIdentifier:(NSString *)arg2;

@end
