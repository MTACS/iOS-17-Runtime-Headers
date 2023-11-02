
@protocol ARUICountdownAnimation

@required

+ (NSString *)identifier;

- (void)applyToCountdownView:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: ARUICountdownView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)cancelable;
- (double)delay;
- (double)duration;
- (NSString *)identifier;

@optional

- (unsigned long long)countdownStep;

@end
