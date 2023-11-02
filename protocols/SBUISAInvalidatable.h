
@protocol SBUISAInvalidatable <NSObject>

@required

- (void)addInvalidationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBUISAInvalidatable> *, NSString *, void*
- (void)invalidateWithReason:(NSString *)arg1;
- (bool)isValid;

@optional

- (NSDate *)creationDate;

@end
