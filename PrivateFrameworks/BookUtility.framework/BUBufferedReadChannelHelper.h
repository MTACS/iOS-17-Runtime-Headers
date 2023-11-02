
@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel> {
    BUBufferedReadChannel * _bufferedReadChannel;
}

@property (nonatomic) BUBufferedReadChannel *bufferedReadChannel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bufferedReadChannel;
- (void)close;
- (id)init;
- (id)initWithBufferedReadChannel:(id)arg1;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setBufferedReadChannel:(id)arg1;

@end
