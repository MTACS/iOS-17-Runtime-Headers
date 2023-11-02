
@interface LNCorpus : NSObject {
    unsigned long long  _capacity;
    <LNCorpusObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _terms;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic) <LNCorpusObserver> *observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSArray *terms;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (void)changeWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)count;
- (id)getTerms;
- (id)init;
- (id)initWithContents:(id)arg1;
- (id)initWithContents:(id)arg1 capacity:(long long)arg2;
- (id)observer;
- (id)queue;
- (void)removeAllWithCompletionHandler:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setTerms:(id)arg1;
- (id)terms;

@end
