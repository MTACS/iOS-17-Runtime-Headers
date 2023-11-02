
@interface MSASPConnectionGate : NSObject {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (id)gate;

- (void).cxx_destruct;
- (id)error;
- (void)setError:(id)arg1;

@end
