
@interface ATXDigestOnboardingSuggestionLoggingBiomeStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream * _inner;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)deleteAllEvents;
- (id)identifier;
- (id)init;
- (id)initWithStoreConfig:(id)arg1;
- (id)publisherFromStartTime:(double)arg1;
- (id)source;

@end
