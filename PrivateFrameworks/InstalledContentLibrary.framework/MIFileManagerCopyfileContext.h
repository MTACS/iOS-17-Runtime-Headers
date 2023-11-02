
@interface MIFileManagerCopyfileContext : NSObject {
    NSError * _error;
    bool  _ignoreErrors;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool ignoreErrors;

- (void).cxx_destruct;
- (id)error;
- (bool)ignoreErrors;
- (void)setError:(id)arg1;
- (void)setIgnoreErrors:(bool)arg1;

@end
