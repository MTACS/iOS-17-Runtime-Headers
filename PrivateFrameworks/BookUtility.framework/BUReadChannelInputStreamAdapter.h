
@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream> {
    NSObject<OS_dispatch_data> * _leftoverData;
    long long  _offset;
    <BUReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_data> *leftoverData;
@property (nonatomic) long long offset;
@property (nonatomic, retain) <BUReadChannel> *readChannel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithReadChannel:(id)arg1;
- (id)leftoverData;
- (long long)offset;
- (id)readChannel;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;
- (void)setLeftoverData:(id)arg1;
- (void)setOffset:(long long)arg1;
- (void)setReadChannel:(id)arg1;

@end
