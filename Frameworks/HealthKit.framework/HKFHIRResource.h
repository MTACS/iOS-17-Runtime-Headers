
@interface HKFHIRResource : NSObject <NSCopying, NSSecureCoding> {
    HKFHIRVersion * _FHIRVersion;
    NSData * _data;
    NSString * _identifier;
    NSDate * _lastUpdatedDate;
    NSString * _resourceType;
    NSURL * _sourceURL;
}

@property (readonly, copy) HKFHIRVersion *FHIRVersion;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSDate *lastUpdatedDate;
@property (readonly, copy) NSString *resourceType;
@property (readonly, copy) NSString *sourceString;
@property (readonly, copy) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2 FHIRVersion:(id)arg3 data:(id)arg4 sourceURL:(id)arg5 lastUpdatedDate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedDate;
- (id)resourceType;
- (id)sourceString;
- (id)sourceURL;

@end
