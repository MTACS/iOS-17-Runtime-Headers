
@interface TSPDatabaseInputStream : NSObject <SFUInputStream, TSUStreamReadChannel> {
    struct sqlite3_blob { } * _blob;
    int  _length;
    int  _offset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithBlob:(struct sqlite3_blob { }*)arg1;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)seekToOffset:(long long)arg1;

@end
