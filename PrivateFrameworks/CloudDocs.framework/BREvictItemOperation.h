
@interface BREvictItemOperation : BROperation {
    id /* block */  _evictionCompletionBlock;
    struct { 
        unsigned long long sectionID; 
        char *function; 
        int line; 
    }  _section;
    NSURL * _url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)evictionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setEvictionCompletionBlock:(id /* block */)arg1;

@end
