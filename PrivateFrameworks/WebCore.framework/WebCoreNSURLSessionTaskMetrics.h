
@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { 
        void *m_ptr; 
    }  _transactionMetrics;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithMetrics:(void*)arg1;
- (void)dealloc;
- (id)transactionMetrics;

@end
