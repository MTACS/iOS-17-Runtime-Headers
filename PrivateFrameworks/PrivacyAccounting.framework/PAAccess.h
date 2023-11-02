
@interface PAAccess : NSObject <BMProtoBufWrapper, BMStoreData, NSCopying, NSSecureCoding> {
    PAApplication * _accessor;
    NSSet * _assetIdentifiers;
    unsigned long long  _eventCount;
    NSUUID * _identifier;
    long long  _kind;
    double  _timestampAdjustment;
    long long  _visibilityState;
}

@property (nonatomic, readonly) PAApplication *accessor;
@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptionForCategory;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long kind;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestampAdjustment;
@property (nonatomic, readonly) long long visibilityState;

+ (id)allAccessClasses;
+ (id)eventStreamIdentifier;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (id)accessor;
- (id)asIntervalBeginEvent;
- (id)asIntervalEndEventWithTimestampAdjustment:(double)arg1;
- (id)asIntervalEventWithAssetIdentifiers:(id)arg1 visibilityState:(long long)arg2 accessEventCount:(unsigned long long)arg3;
- (id)assetIdentifiers;
- (id)category;
- (id)copyWithNewAccessor:(id)arg1;
- (id)copyWithNewAssetIdentifiers:(id)arg1;
- (id)copyWithNewIdentifier:(id)arg1;
- (id)copyWithNewKind:(long long)arg1;
- (id)copyWithNewTimestampAdjustment:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (id)descriptionForCategory;
- (id)descriptionForKind;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventCount;
- (unsigned long long)hash;
- (unsigned long long)hashWithOptions:(unsigned long long)arg1;
- (id)identifier;
- (id)initWithAccessor:(id)arg1;
- (id)initWithAccessor:(id)arg1 assetIdentifiers:(id)arg2;
- (id)initWithAccessor:(id)arg1 identifier:(id)arg2 kind:(long long)arg3;
- (id)initWithAccessor:(id)arg1 identifier:(id)arg2 kind:(long long)arg3 assetIdentifiers:(id)arg4;
- (id)initWithAccessor:(id)arg1 identifier:(id)arg2 kind:(long long)arg3 assetIdentifiers:(id)arg4 visibilityState:(long long)arg5 accessEventCount:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccess:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)json;
- (long long)kind;
- (id)proto;
- (id)serialize;
- (double)timestampAdjustment;
- (long long)visibilityState;

@end
