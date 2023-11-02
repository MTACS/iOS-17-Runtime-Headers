
@interface WBSCalculationResultProvider : NSObject {
    NSObject<OS_dispatch_queue> * _calculationQueue;
    NSString * _currentQueryString;
    NSDataDetector * _phoneNumberDetector;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queryLock;
    NSArray * _queryPrefixesToIgnore;
    NSSet * _queryStringsToIgnore;
}

- (void).cxx_destruct;
- (void)evaluateQuery:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)init;

@end
