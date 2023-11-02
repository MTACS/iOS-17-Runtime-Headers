
@interface SBHLibraryCategoryMapProviderDefaultSource : NSObject <SBHLibraryCategoryMapProviderSource> {
    <SBHLibraryCategoryMapProviderSourceDelegate> * _delegate;
    SBHIconModel * _iconModel;
    bool  _refreshScheduled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHLibraryCategoryMapProviderSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestRefresh:(id)arg1;
- (id)delegate;
- (id)initWithIconModel:(id)arg1;
- (void)requestLibraryCategoryMapWithOptions:(unsigned long long)arg1 existingLibraryCategoryMap:(id)arg2 forbiddenApplicationIdentifiers:(id)arg3 sessionId:(unsigned long long)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (void)setDelegate:(id)arg1;
- (id)sourceName;

@end
