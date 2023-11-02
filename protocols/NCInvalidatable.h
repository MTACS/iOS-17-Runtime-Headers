
@protocol NCInvalidatable <NSObject>

@required

- (void)addInvalidationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NCInvalidatable> *, NSString *, void*
- (NSString *)instantiationReason;
- (void)invalidateWithReason:(NSString *)arg1;
- (NSString *)invalidationReason;
- (bool)isValid;

@end
