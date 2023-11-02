
@interface FCAVAssetContentArchive : FCContentArchive {
    NTPBAVAsset * _avAsset;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)arg1;

@end
