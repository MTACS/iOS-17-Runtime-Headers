
@interface MSPSharedTripFetchedStatus : NSObject {
    double  _fetchedTimestamp;
    long long  _status;
}

@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFailedRequest, nonatomic, readonly) bool failedRequest;
@property (nonatomic, readonly) long long status;

- (id)description;
- (id)initWithStatus:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isFailedRequest;
- (long long)status;

@end
