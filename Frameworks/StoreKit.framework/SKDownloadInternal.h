
@interface SKDownloadInternal : NSObject {
    NSNumber * _contentLength;
    NSURL * _contentURL;
    NSString * _contentVersion;
    NSNumber * _downloadID;
    NSError * _error;
    NSString * _productID;
    float  _progress;
    long long  _state;
    double  _timeRemaining;
    SKPaymentTransaction * _transaction;
}

- (void).cxx_destruct;

@end
