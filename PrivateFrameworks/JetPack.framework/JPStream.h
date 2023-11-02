
@interface JPStream : NSObject {
    struct JetPackStream { } * _backing;
    bool  _releaseBackingOnDealloc;
}

@property (nonatomic, readonly) struct JetPackStream { }*backing;
@property (nonatomic, readonly) bool releaseBackingOnDealloc;

- (struct JetPackStream { }*)backing;
- (void)dealloc;
- (id)initWithBacking:(struct JetPackStream { }*)arg1 releaseOnDealloc:(bool)arg2;
- (unsigned long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)readData;
- (id)readDataWithLength:(unsigned long long)arg1;
- (bool)releaseBackingOnDealloc;
- (bool)writeToFile:(id)arg1 blockSize:(unsigned long long)arg2 error:(id*)arg3;

@end
