
@interface PRSQueryTask : NSObject <NSSecureCoding> {
    bool  _canceled;
    NSDictionary * _category_stats;
    NSString * _fbq;
    PRSSearchFeedback * _feedback;
    <PRSSearchQueryHandler> * _handler;
    NSArray * _parsecCategoryOrder;
    SPSearchQueryContext * _queryContext;
    long long  _queryId;
    unsigned long long  _queryIdent;
    NSString * _queryString;
    NSObject<OS_dispatch_queue> * _queue;
    id  _representedObject;
    NSDictionary * _server_features;
    PRSSearchSession * _session;
    bool  _started;
    bool  _webSearch;
}

@property (nonatomic) bool canceled;
@property (nonatomic, retain) NSDictionary *category_stats;
@property (nonatomic, retain) NSString *fbq;
@property (retain) PRSSearchFeedback *feedback;
@property (nonatomic, retain) <PRSSearchQueryHandler> *handler;
@property (nonatomic, retain) NSArray *parsecCategoryOrder;
@property (nonatomic, readonly) SPSearchQueryContext *queryContext;
@property long long queryId;
@property unsigned long long queryIdent;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) id representedObject;
@property (nonatomic, retain) NSDictionary *server_features;
@property (nonatomic) PRSSearchSession *session;
@property (nonatomic) bool started;
@property bool webSearch;

+ (void)initialize;
+ (void)resumeDecoding;
+ (bool)supportsSecureCoding;
+ (void)suspendDecoding;

- (void).cxx_destruct;
- (void)cancel;
- (bool)canceled;
- (id)category_stats;
- (void)encodeWithCoder:(id)arg1;
- (id)fbq;
- (id)feedback;
- (id)feedbackQueryIdentifier;
- (id)handler;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 queryContext:(id)arg5;
- (void)invalidateHandler;
- (id)parsecCategoryOrder;
- (id)queryContext;
- (long long)queryId;
- (unsigned long long)queryIdent;
- (id)queryString;
- (id)queue;
- (id)representedObject;
- (void)resume;
- (id)server_features;
- (id)session;
- (void)setCanceled:(bool)arg1;
- (void)setCategory_stats:(id)arg1;
- (void)setFbq:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setParsecCategoryOrder:(id)arg1;
- (void)setParsecState:(bool)arg1;
- (void)setQueryId:(long long)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setServer_features:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setWebSearch:(bool)arg1;
- (bool)started;
- (bool)webSearch;

@end
