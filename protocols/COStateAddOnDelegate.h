
@protocol COStateAddOnDelegate <NSObject>

@required

- (void)addOn:(COStateAddOn *)arg1 receivedUpdates:(NSDictionary *)arg2 removals:(NSDictionary *)arg3;
- (void)stateForAddOn:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 7: COStateAddOn *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
