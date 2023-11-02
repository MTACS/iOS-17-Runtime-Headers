
@interface TDVHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming> {
    <BSInvalidatable> * _homeButtonAssertion;
    id /* block */  _homeButtonHandlerCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BSInvalidatable> *homeButtonAssertion;
@property (nonatomic, copy) id /* block */ homeButtonHandlerCallback;
@property (readonly) Class superclass;

+ (id)handlerWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (id)homeButtonAssertion;
- (id /* block */)homeButtonHandlerCallback;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)setHomeButtonAssertion:(id)arg1;
- (void)setHomeButtonHandlerCallback:(id /* block */)arg1;
- (void)startConsumingHardwarePresses:(id /* block */)arg1;
- (void)stopConsumingHardwarePresses;

@end
