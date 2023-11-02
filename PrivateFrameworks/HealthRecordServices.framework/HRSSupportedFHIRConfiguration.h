
@interface HRSSupportedFHIRConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _releasesTable;
}

@property (nonatomic, retain) NSMutableDictionary *releasesTable;

+ (id)emetConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addSupportedFHIRRelease:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSupportedFHIRRelease:(id)arg1;
- (bool)isSupportedFHIRResourceType:(id)arg1 FHIRRelease:(id)arg2;
- (bool)isSupportedFHIRResourceType:(id)arg1 FHIRVersionString:(id)arg2;
- (bool)isSupportedFHIRVersionString:(id)arg1;
- (id)releasesTable;
- (void)setReleasesTable:(id)arg1;
- (id)supportedReleaseForFHIRRelease:(id)arg1;

@end
