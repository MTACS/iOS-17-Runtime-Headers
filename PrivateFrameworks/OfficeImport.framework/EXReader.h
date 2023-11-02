
@interface EXReader : OCXReader {
    NSString * mTemporaryDirectory;
}

@property (nonatomic, retain) NSString *temporaryDirectory;

- (void).cxx_destruct;
- (id)defaultPassphrase;
- (id)read;
- (void)setTemporaryDirectory:(id)arg1;
- (id)temporaryDirectory;

@end
