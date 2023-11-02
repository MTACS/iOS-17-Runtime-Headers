
@interface MGRemoteQueryClientHandlerQuery : NSObject <MGRemoteQueryClientHandlerProtocol> {
    MGGroupsMediator * _groupsMediator;
    MGOutstandingQuery * _query;
    bool  _seenInitialResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MGGroupsMediator *groupsMediator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MGOutstandingQuery *query;
@property (nonatomic) bool seenInitialResponse;
@property (readonly) Class superclass;

+ (id)handlerWithQuery:(id)arg1 forGroupsQueryAgent:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithQuery:(id)arg1 groupsQueryAgent:(id)arg2;
- (id)description;
- (id)groupsMediator;
- (id)handleCompleteResponse:(id)arg1 jsonPayload:(id)arg2;
- (void)prepareURL:(id)arg1;
- (id)query;
- (bool)seenInitialResponse;
- (void)setSeenInitialResponse:(bool)arg1;
- (bool)validateResponse:(id)arg1;

@end
