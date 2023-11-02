
@interface NRConnectivitySubscriber : NSObject {
    bool  _connected;
    unsigned long long  _dropoutCounter;
}

+ (bool)getDropoutCounter:(unsigned long long*)arg1;

- (id)init;

@end
