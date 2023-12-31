
@interface NUResponse : NSObject {
    NSError * _error;
    id  _result;
}

@property (retain) NSError *error;
@property (retain) id result;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)result;
- (id)result:(id*)arg1;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;

@end
