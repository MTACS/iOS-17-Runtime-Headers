
@interface NWURLErrorUserInfoDictionary : NSDictionary {
    NWURLError * _error;
}

@property (nonatomic, retain) NWURLError *error;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)setError:(id)arg1;

@end
