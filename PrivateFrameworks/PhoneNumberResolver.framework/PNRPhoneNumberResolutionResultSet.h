
@interface PNRPhoneNumberResolutionResultSet : NSObject {
    NSMutableDictionary * _results;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultsLock;
}

- (void).cxx_destruct;
- (id)description;
- (void)enumerateResolutionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;
- (void)setResult:(id)arg1 resultDataSource:(long long)arg2 forPhoneNumber:(id)arg3;

@end
