
@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding> {
    NSDictionary * _allAvailableForStagingAttributes;
    unsigned long long  _totalExpectedBytes;
}

@property (nonatomic, readonly, retain) NSDictionary *allAvailableForStagingAttributes;
@property (nonatomic, readonly) unsigned long long totalExpectedBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allAvailableForStagingAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvailableForStaging:(id)arg1 withTotalExpectedBytes:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (unsigned long long)totalExpectedBytes;

@end
