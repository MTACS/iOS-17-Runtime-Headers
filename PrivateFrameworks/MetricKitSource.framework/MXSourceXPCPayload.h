
@interface MXSourceXPCPayload : NSObject <NSSecureCoding> {
    NSDate * _datestamp;
    NSDictionary * _metrics;
    long long  _sourceID;
}

@property (retain) NSDate *datestamp;
@property (retain) NSDictionary *metrics;
@property long long sourceID;

// Image: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)datestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceID:(long long)arg1 withDateStamp:(id)arg2 andMetrics:(id)arg3;
- (id)metrics;
- (void)setDatestamp:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setSourceID:(long long)arg1;
- (long long)sourceID;

// Image: /System/Library/PrivateFrameworks/MetricKitCore.framework/MetricKitCore

- (id)bundleID;
- (id)sourceIDString;

@end
