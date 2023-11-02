
@interface DEFileWriter : NSObject <DEWriter> {
    NSURL * _dest;
    NSFileHandle * _file;
}

@property (nonatomic, retain) NSURL *dest;
@property (nonatomic, retain) NSFileHandle *file;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)dest;
- (id)file;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)setDest:(id)arg1;
- (void)setFile:(id)arg1;
- (void)writeData:(id)arg1;

@end
