
@protocol TSPDecoder <NSObject>

@required

- (<TSUStreamReadChannel> *)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id <TSPDecoderDataInfo>)arg2;
- (<TSUStreamReadChannel> *)newReadChannelForMetadata;
- (<TSUStreamReadChannel> *)newReadChannelForRootObjectComponent;

@end
