
@protocol CNUIPRLikenessResolver <NSObject>

@required

+ (<CNKeyDescriptor> *)descriptorForRequiredKeys;

- (CNObservable *)badgeObservableWithLikenessBadge:(id <CNUILikenessBadge>)arg1 workScheduler:(id <CNScheduler>)arg2;
- (CNObservable *)basicMonogramObservableFromString:(CNObservable *)arg1 color:(PRMonogramColor *)arg2;
- (CNContactStore *)contactStore;
- (CNObservable *)likenessesForContact:(CNContact *)arg1 options:(CNUIPRLikenessResolverOptions *)arg2 workScheduler:(id <CNScheduler>)arg3;
- (CNObservable *)likenessesForContact:(CNContact *)arg1 workScheduler:(id <CNScheduler>)arg2;
- (<CNUIPlaceholderProviderFactory> *)placeholderProviderFactory;
- (<CNCancelable> *)resolveLikenessesForContacts:(void *)arg1 workScheduler:(void *)arg2 withContentHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, <CNScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
