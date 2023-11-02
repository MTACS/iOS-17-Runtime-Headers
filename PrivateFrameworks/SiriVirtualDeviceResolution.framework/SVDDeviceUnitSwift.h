
@interface SVDDeviceUnitSwift : NSObject <NSSecureCoding> {
    void assistantId;
    void homeKitAccessoryIdentifier;
    void identifier;
    void isCommunalDevice;
    void mediaRouteIdentifier;
    void name;
    void proximity;
    void roomName;
}

@property (nonatomic, readonly) NSString *assistantId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *homeKitAccessoryIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCommunalDevice;
@property (nonatomic, readonly) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) NSString *roomName;

// Image: /System/Library/PrivateFrameworks/SiriVirtualDeviceResolution.framework/SiriVirtualDeviceResolution

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)homeKitAccessoryIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assistantId:(id)arg2 builder:(id /* block */)arg3;
- (bool)isCommunalDevice;
- (bool)isEqual:(id)arg1;
- (id)mediaRouteIdentifier;
- (id)name;
- (long long)proximity;
- (id)roomName;

// Image: /System/Library/PrivateFrameworks/SiriAppLaunchIntents.framework/SiriAppLaunchIntents

- (id)description;

// Image: /System/Library/PrivateFrameworks/SiriIdentityInternal.framework/SiriIdentityInternal

- (id)description;

// Image: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents

- (id)description;

@end
