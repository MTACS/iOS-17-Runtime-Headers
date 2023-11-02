
@interface _CSMultiQuery : NSObject {
    id  _completionHandler;
    NSObject<OS_dispatch_group> * _group;
    NSArray * _queries;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _results;
    bool  _simple;
    NSMutableArray * _simpleQueryTokens;
    bool  _started;
}

@property (nonatomic, retain) id completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, retain) NSArray *queries;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic) bool simple;
@property (nonatomic, retain) NSMutableArray *simpleQueryTokens;

+ (id)countingQueryForEmailsArrays:(id)arg1 scope:(unsigned long long)arg2 context:(id)arg3 contextualFilterQueries:(id)arg4 includeSecondaryRecipients:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (id)countingQueryWithPeopleSuggestions:(id)arg1 filterQuery:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)countingQueryWithStrings:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)countingQueryWithStrings:(id)arg1 contexts:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)countingQueryWithSuggestions:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (void)cancel;
- (id)completionHandler;
- (id)group;
- (id)initWithQueries:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSimpleQueries:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queries;
- (id)queue;
- (id)results;
- (void)setCompletionHandler:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSimple:(bool)arg1;
- (void)setSimpleQueryTokens:(id)arg1;
- (bool)simple;
- (id)simpleQueryTokens;
- (void)start;
- (void)startSimpleQueryAtIndex:(unsigned long long)arg1;

@end
