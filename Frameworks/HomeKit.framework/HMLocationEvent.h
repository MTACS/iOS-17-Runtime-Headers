
@interface HMLocationEvent : HMEvent <HFLocationBasedEvent, NSCopying, NSMutableCopying, NSSecureCoding> {
    HMFLocationAuthorization * _authorization;
    long long  _locationAuthorization;
    CLRegion * _region;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hf_eventType;
@property (nonatomic) long long locationAuthorization;
@property (nonatomic, retain) CLRegion *region;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (void)__locationAuthorizationUpdated:(id)arg1;
- (void)_retrieveLocationEvent;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_updateFromDictionary:(id)arg1;
- (id)authorization;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 region:(id)arg2;
- (id)initWithRegion:(id)arg1;
- (long long)locationAuthorization;
- (bool)mergeFromNewObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)region;
- (void)setLocationAuthorization:(long long)arg1;
- (void)setRegion:(id)arg1;
- (void)updateRegion:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (bool)hf_isRegion:(id)arg1 atHome:(id)arg2;
+ (unsigned long long)hf_locationEventTypeForRegion:(id)arg1;

- (unsigned long long)hf_eventType;
- (bool)hf_isRegionAtHome:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
