
@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding> {
    __CFN_TaskMetrics * __metrics;
}

@property (readonly) unsigned long long redirectCount;
@property (readonly, copy) NSDateInterval *taskInterval;
@property (readonly, copy) NSArray *transactionMetrics;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)redirectCount;
- (id)taskInterval;
- (id)transactionMetrics;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_clientMetrics;
- (id)_geo_remoteAddressAndPort;

@end
