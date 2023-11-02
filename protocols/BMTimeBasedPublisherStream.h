
@protocol BMTimeBasedPublisherStream <BMStream>

@required

- (<BMBookmarkablePublisher> *)publisherFromStartTime:(double)arg1;
- (<BMBookmarkablePublisher> *)publisherWithStartTime:(NSNumber *)arg1 endTime:(NSNumber *)arg2 maxEvents:(NSNumber *)arg3 lastN:(NSNumber *)arg4 reversed:(bool)arg5;
- (<BMBookmarkablePublisher> *)publisherWithStartTime:(NSNumber *)arg1 endTime:(NSNumber *)arg2 maxEvents:(NSNumber *)arg3 reversed:(bool)arg4;

@end
