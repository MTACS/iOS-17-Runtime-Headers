
@protocol BMStreamDatastoreWriting <NSObject>

@required

- (bool)writeEventWithEventBody:(id <BMStoreData>)arg1 timestamp:(double)arg2 outEventSize:(unsigned long long*)arg3;

@end
