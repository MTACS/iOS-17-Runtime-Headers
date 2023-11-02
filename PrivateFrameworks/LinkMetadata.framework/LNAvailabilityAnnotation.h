
@interface LNAvailabilityAnnotation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deprecatedVersion;
    NSString * _introducedVersion;
    NSString * _obsoletedVersion;
}

@property (nonatomic, readonly, copy) NSString *deprecatedVersion;
@property (nonatomic, readonly, copy) NSString *introducedVersion;
@property (nonatomic, readonly, copy) NSString *obsoletedVersion;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)available;
+ (id)deprecated;
+ (bool)supportsSecureCoding;
+ (id)unavailable;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deprecatedVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntroducedVersion:(id)arg1 deprecatedVersion:(id)arg2 available:(bool)arg3 deprecated:(bool)arg4;
- (id)initWithIntroducedVersion:(id)arg1 deprecatedVersion:(id)arg2 obsoletedVersion:(id)arg3;
- (id)introducedVersion;
- (bool)isEqual:(id)arg1;
- (id)obsoletedVersion;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)_availabilityResultWithSystemVersion:(id)arg1;
- (id)_availabilityResultWithoutSystemVersion;

@end
