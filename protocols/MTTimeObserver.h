
@protocol MTTimeObserver <NSObject>

@required

- (void)timeListener:(void *)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 6: MTTimeListener *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
