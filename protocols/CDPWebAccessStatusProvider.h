
@protocol CDPWebAccessStatusProvider <NSObject>

@required

- (unsigned long long)webAccessStatus:(id*)arg1;
- (void)webAccessStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end
