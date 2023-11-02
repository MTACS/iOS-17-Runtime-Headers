
@interface TTSStreamingZipReader : NSObject {
    NSString * _password;
    NSString * _zipPath;
}

@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *zipPath;

- (void).cxx_destruct;
- (bool)enumerateFiles:(id /* block */)arg1;
- (id)initWithPath:(id)arg1 andPassword:(id)arg2;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setZipPath:(id)arg1;
- (id)zipPath;

@end
