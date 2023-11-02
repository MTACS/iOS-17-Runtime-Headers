
@interface NWURLSessionReadRequest : NSObject {
    id /* block */  _awaitingData;
    bool  _complete;
    NSObject<OS_dispatch_data> * _data;
    NSError * _error;
    unsigned long long  _maximumLength;
    unsigned long long  _minimumLength;
}

- (void).cxx_destruct;

@end
