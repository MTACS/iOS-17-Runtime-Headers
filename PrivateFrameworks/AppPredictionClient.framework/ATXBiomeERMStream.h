
@interface ATXBiomeERMStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream * _inner;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithStoreConfig:(id)arg1;
- (id)publisherFromStartTime:(double)arg1;
- (id)source;

@end
