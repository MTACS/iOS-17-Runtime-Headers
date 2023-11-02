
@interface PKUniqueAddressField : NSObject {
    NSError * _error;
    bool  _formatIsInvalid;
    long long  _index;
    NSString * _invalidText;
    NSString * _key;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool formatIsInvalid;
@property (nonatomic) long long index;
@property (nonatomic, retain) NSString *invalidText;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)error;
- (bool)formatIsInvalid;
- (long long)index;
- (id)invalidText;
- (id)key;
- (void)setError:(id)arg1;
- (void)setFormatIsInvalid:(bool)arg1;
- (void)setIndex:(long long)arg1;
- (void)setInvalidText:(id)arg1;
- (void)setKey:(id)arg1;

@end
