
@protocol CNAutocompleteSearchObservableProvider <NSObject>

@required

- (CNObservable *)calendarServersSearchObservable;
- (CNObservable *)directoryServersSearchObservable;
- (NSArray *)localExtensionSearchObservables;
- (CNObservable *)localSearchObservable;
- (CNObservable *)predictionsSearchObservableWithUnfilteredResultPromise:(id <CNPromise>)arg1;
- (CNObservable *)recentsSearchObservable;
- (CNObservable *)stewieSearchObservable;
- (CNObservable *)suggestionsSearchObservable;

@end
