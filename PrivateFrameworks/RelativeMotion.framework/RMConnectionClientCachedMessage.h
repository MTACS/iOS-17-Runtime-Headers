
@interface RMConnectionClientCachedMessage : NSObject {
    NSData * _data;
    NSString * _name;
    id /* block */  _streamingCallback;
}

- (void).cxx_destruct;

@end
