
@interface CKLStreamTrafficObserver : CKLStreamObserver {
    NSPredicate * _logMessageFilter;
    CKDTrafficLogParser * _parser;
    NSObject<OS_dispatch_queue> * _printQueue;
    NSMutableDictionary * _requestDictionary;
    id /* block */  _requestParsedBlock;
}

@property (nonatomic, copy) NSPredicate *logMessageFilter;
@property (retain) CKDTrafficLogParser *parser;
@property (retain) NSObject<OS_dispatch_queue> *printQueue;
@property (retain) NSMutableDictionary *requestDictionary;
@property (nonatomic, copy) id /* block */ requestParsedBlock;

- (void).cxx_destruct;
- (void)eventMatched:(id)arg1;
- (void)finish;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (id)logMessageFilter;
- (void)parseRequestArrayAndPrint:(id)arg1;
- (id)parser;
- (id)parserFromConfigurationMessage:(id)arg1;
- (id)printQueue;
- (id)requestDictionary;
- (id /* block */)requestParsedBlock;
- (void)setLogMessageFilter:(id)arg1;
- (void)setParser:(id)arg1;
- (void)setPrintQueue:(id)arg1;
- (void)setRequestDictionary:(id)arg1;
- (void)setRequestParsedBlock:(id /* block */)arg1;

@end
