
@interface DEFileReader : NSObject <DEReader> {
    NSFileHandle * _file;
    NSURL * _src;
}

@property (nonatomic, retain) NSFileHandle *file;
@property (nonatomic, retain) NSURL *src;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)file;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setFile:(id)arg1;
- (void)setSrc:(id)arg1;
- (id)src;

@end
