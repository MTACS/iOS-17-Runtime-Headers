
@interface MGGroupsQueryOperation : NSOperation {
    MGGroupsQueryAgent * _agent;
    NSDictionary * _groups;
    MGOutstandingQuery * _query;
    NSDictionary * _variables;
}

@property (nonatomic, readonly) MGGroupsQueryAgent *agent;
@property (nonatomic, readonly, copy) NSDictionary *groups;
@property (nonatomic, readonly, copy) MGOutstandingQuery *query;
@property (nonatomic, readonly, copy) NSDictionary *variables;

- (void).cxx_destruct;
- (id)agent;
- (id)groups;
- (id)initWithAgent:(id)arg1 query:(id)arg2 groups:(id)arg3 substitutionVariables:(id)arg4;
- (void)main;
- (id)query;
- (id)variables;

@end
