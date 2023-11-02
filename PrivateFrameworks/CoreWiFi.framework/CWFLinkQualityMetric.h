
@interface CWFLinkQualityMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    NSData * _linkQualityMetricData;
    NSDate * _updatedAt;
}

@property (nonatomic, readonly) unsigned long long CCA;
@property (nonatomic, readonly) long long RSSI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *linkQualityMetricData;
@property (nonatomic, readonly) long long noise;
@property (nonatomic, readonly) double rxRate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double txRate;
@property (nonatomic, copy) NSDate *updatedAt;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)CCA;
- (id)JSONCompatibleKeyValueMap;
- (long long)RSSI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLinkQualityMetric:(id)arg1;
- (id)linkQualityMetricData;
- (long long)noise;
- (double)rxRate;
- (void)setLinkQualityMetricData:(id)arg1;
- (void)setUpdatedAt:(id)arg1;
- (double)txRate;
- (id)updatedAt;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)dictionary;

@end
