
@protocol WBSCloudKitContainerManateeObserving <NSObject>

@required

- (NSString *)containerIdentifier;
- (void)determineManateeStateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (id)initWithContainerIdentifier:(NSString *)arg1 appleAccountInformationProvider:(id <WBSAppleAccountInformationProviding>)arg2;
- (void)setStateChangeObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (id /* block */)stateChangeObserver:(void *)arg1; // needs 1 arg types, found 5: id /* block */, long long, void*, id, SEL

@end
