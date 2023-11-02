
@interface _RWIAutomaticInspectionSession : NSObject {
    NSString * _applicationIdentifier;
    int  _applicationPID;
    unsigned long long  _currentDebuggerIndex;
    NSArray * _debuggers;
    NSString * _identifier;
    NSNumber * _pageId;
}

@property (nonatomic, readonly, copy) NSArray *debuggers;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (void)_sendQuery;
- (id)debuggers;
- (id)identifier;
- (id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 applicationPID:(int)arg3 debuggers:(id)arg4;
- (bool)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2;
- (bool)receivedRejectResponse;
- (void)start;

@end
