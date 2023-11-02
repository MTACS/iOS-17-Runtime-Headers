
@interface CKResult : NSObject {
    NSError * _error;
    id  _successValue;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) id successValue;

- (void).cxx_destruct;
- (id)error;
- (unsigned long long)hash;
- (id)initWithFailure:(id)arg1;
- (id)initWithSuccess:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)successValue;

@end
