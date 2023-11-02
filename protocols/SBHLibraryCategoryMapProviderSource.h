
@protocol SBHLibraryCategoryMapProviderSource <NSObject>

@required

- (<SBHLibraryCategoryMapProviderSourceDelegate> *)delegate;
- (void)requestLibraryCategoryMapWithOptions:(void *)arg1 existingLibraryCategoryMap:(void *)arg2 forbiddenApplicationIdentifiers:(void *)arg3 sessionId:(void *)arg4 queue:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: unsigned long long, SBHLibraryCategoryMap *, NSSet *, unsigned long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBHLibraryCategoryMap *, NSError *, void*
- (void)setDelegate:(id <SBHLibraryCategoryMapProviderSourceDelegate>)arg1;
- (NSString *)sourceName;

@end
