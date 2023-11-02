
@interface NWURLSessionRequestBodyData : NSObject <NWURLSessionRequestBodyProvider> {
    NSObject<OS_dispatch_data> * _data;
    unsigned long long  _length;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) long long countOfBytesSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (long long)countOfBytesSent;
- (void)readMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
