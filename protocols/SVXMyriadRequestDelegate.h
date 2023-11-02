
@protocol SVXMyriadRequestDelegate <NSObject>

@required

- (void)preheatMyriad;
- (void)resetMyriad;
- (void)setupEnabled:(bool)arg1;
- (void)startAdvertising:(void *)arg1 withMyriadGoodnessScoreContext:(void *)arg2 withMyriadAudioContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, AFMyriadGoodnessScoreContext *, AFMyriadContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXServiceCommandResult *, void*

@optional

- (void)startAdvertisingEmergency;

@end
