
@interface BMUserActivityMetadataEvent : NSObject <BMIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _activityType;
    NSString * _associatedBundleId;
    NSString * _associatedURLString;
    bool  _hasAssociatedImageRepresentation;
    NSString * _modeIdentifier;
    NSString * _title;
    NSArray * _topics;
    NSData * _userActivityData;
    NSString * _uuid;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *associatedBundleId;
@property (nonatomic, readonly) NSString *associatedURLString;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) bool hasAssociatedImageRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *modeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSString *uniqueId;
@property (nonatomic, readonly, copy) NSData *userActivityData;
@property (nonatomic, readonly) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)activityType;
- (id)associatedBundleId;
- (id)associatedURLString;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (bool)hasAssociatedImageRepresentation;
- (unsigned long long)hash;
- (id)initWithAbsoluteTimestamp:(double)arg1 userActivityData:(id)arg2 title:(id)arg3 activityType:(id)arg4 associatedBundleId:(id)arg5 associatedURLString:(id)arg6 modeIdentifier:(id)arg7 topics:(id)arg8 hasAssociatedImageRepresentation:(bool)arg9 uuid:(id)arg10;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)modeIdentifier;
- (id)proto;
- (id)serialize;
- (id)title;
- (id)topics;
- (id)userActivityData;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/ProactiveHarvesting.framework/ProactiveHarvesting

- (void)forwardInvocation:(id)arg1;
- (id)hv_bundleId;
- (id)hv_uniqueId;

@end
