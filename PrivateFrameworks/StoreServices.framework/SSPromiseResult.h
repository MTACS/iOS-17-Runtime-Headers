
@interface SSPromiseResult : NSObject {
    NSError * _error;
    id  _result;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) id result;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (id)result;

@end
