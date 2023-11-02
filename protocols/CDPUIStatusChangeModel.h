
@protocol CDPUIStatusChangeModel <NSObject>

@required

- (void)_checkCurrentStatus:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_updateUnderlyingValue:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSString *)cancelButtonText;
- (NSString *)messageText;
- (NSString *)primaryButtonText;
- (NSString *)titleText;

@optional

- (void)_reportUserChoice:(unsigned long long)arg1 error:(NSError *)arg2;

@end
