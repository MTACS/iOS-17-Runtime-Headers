
@interface SNTwoPassConfiguration : NSObject {
    <SNRequest> * _firstPassRequest;
    double  _historicalDataAmount;
    <SNRequest> * _secondPassRequest;
}

- (void).cxx_destruct;

@end
