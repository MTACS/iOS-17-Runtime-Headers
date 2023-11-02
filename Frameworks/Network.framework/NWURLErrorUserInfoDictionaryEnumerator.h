
@interface NWURLErrorUserInfoDictionaryEnumerator : NSEnumerator {
    NWURLError * _error;
    NSEnumerator * _userInfoKeyEnumerator;
}

@property (nonatomic, retain) NWURLError *error;
@property (nonatomic, retain) NSEnumerator *userInfoKeyEnumerator;

- (void).cxx_destruct;
- (id)error;
- (id)nextObject;
- (void)setError:(id)arg1;
- (void)setUserInfoKeyEnumerator:(id)arg1;
- (id)userInfoKeyEnumerator;

@end
