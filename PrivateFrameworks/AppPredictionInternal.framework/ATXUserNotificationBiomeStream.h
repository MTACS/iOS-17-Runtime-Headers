
@interface ATXUserNotificationBiomeStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream * _inner;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)deleteAllEvents;
- (id)identifier;
- (id)init;
- (id)initWithStoreConfig:(id)arg1;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherFromStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(long long)arg1 notification:(id)arg2 deliveryReason:(unsigned long long)arg3;
- (id)source;

@end
