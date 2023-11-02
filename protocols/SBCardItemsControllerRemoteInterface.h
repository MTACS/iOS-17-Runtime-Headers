
@protocol SBCardItemsControllerRemoteInterface <NSObject>

@required

- (void)getCardItemsForControllerWithIdentifier:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setCardItems:(NSArray *)arg1 forControllerWithIdentifier:(NSString *)arg2;

@end
