
@protocol CRKSharingAirDropTransfer

@required

- (NSArray *)destFileURLs;
- (NSSet *)fileURLs;
- (NSString *)identifier;
- (void)invalidate;
- (void)setDestFileURLs:(NSArray *)arg1;
- (void)updateWithState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, NSError *, void*

@end
