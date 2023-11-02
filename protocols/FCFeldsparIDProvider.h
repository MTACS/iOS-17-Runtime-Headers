
@protocol FCFeldsparIDProvider <NSObject>

@required

- (void)addObserver:(id <FCFeldsparIDProviderObserving>)arg1;
- (NSString *)feldsparID;
- (void)registerUserInfo:(FCUserInfo *)arg1;
- (void)removeObserver:(id <FCFeldsparIDProviderObserving>)arg1;

@end
