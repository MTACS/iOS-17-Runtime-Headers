
@interface ECLocalMessageActionResults : NSObject {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)arg1;
- (void)setError:(id)arg1;

@end
