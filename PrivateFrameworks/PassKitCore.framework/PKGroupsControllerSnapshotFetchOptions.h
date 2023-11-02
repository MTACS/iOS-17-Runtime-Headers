
@interface PKGroupsControllerSnapshotFetchOptions : NSObject <NSSecureCoding> {
    unsigned long long  _allowedPassType;
    bool  _includeAnnotations;
    bool  _limitResults;
}

@property (nonatomic) unsigned long long allowedPassType;
@property (nonatomic) bool includeAnnotations;
@property (nonatomic) bool limitResults;

+ (bool)supportsSecureCoding;

- (unsigned long long)allowedPassType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAnnotations;
- (id)initWithCoder:(id)arg1;
- (bool)limitResults;
- (void)setAllowedPassType:(unsigned long long)arg1;
- (void)setIncludeAnnotations:(bool)arg1;
- (void)setLimitResults:(bool)arg1;

@end
