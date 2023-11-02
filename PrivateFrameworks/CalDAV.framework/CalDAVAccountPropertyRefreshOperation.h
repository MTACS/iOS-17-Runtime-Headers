
@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> * _defaultAlarmGroup;
    bool  _fetchPrincipalSearchProperties;
}

@property (nonatomic) <CalDAVAccountPropertyRefreshDelegate> *delegate;
@property (nonatomic) bool fetchPrincipalSearchProperties;

- (void).cxx_destruct;
- (id)_copyHomePropertiesPropFindElements;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)arg1;
- (void)_reallyRefreshProperties;
- (void)_refreshDefaultAlarms;
- (bool)fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (id)initWithPrincipal:(id)arg1;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)propPatchForProperty:(id)arg1 value:(id)arg2;
- (void)refreshProperties;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (void)setFetchPrincipalSearchProperties:(bool)arg1;
- (bool)shouldKeepDefaultAlarmError:(id)arg1;
- (bool)shouldRefreshDefaultAlarms;

@end
