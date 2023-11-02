
@interface BRCStreamWriter : NSObject {
    NSOutputStream * _outputStream;
}

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end
