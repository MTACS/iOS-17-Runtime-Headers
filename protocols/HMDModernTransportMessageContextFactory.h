
@protocol HMDModernTransportMessageContextFactory <NSObject>

@required

- (HMDModernTransportMessageContext *)contextWithMessage:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3 dateProvider:(void *)arg4 timerProvider:(void *)arg5; // needs 5 arg types, found 10: HMDRemoteMessage *, HMDModernTransportMessageContextOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <HMDDateProvider> *, <HMDTimerProvider> *

@end
