
@interface BMCoreDuetStream : NSObject <BMStream> {
    <_CDUserContext> * _context;
    NSString * _identifier;
    _DKEventQuery * _query;
    <_DKKnowledgeQuerying> * _store;
}

@property (nonatomic, readonly) <_CDUserContext> *context;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _DKEventQuery *query;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *store;

+ (id)new;

- (void).cxx_destruct;
- (id)context;
- (id)identifier;
- (id)init;
- (id)initWithKnowledgeStore:(id)arg1 clientContext:(id)arg2 identifier:(id)arg3;
- (id)publisherForQuery:(id)arg1;
- (id)query;
- (id)store;

@end
