
@interface _HDDataProvenanceKey : NSObject <NSCopying> {
    HDDataOriginProvenance * _dataProvenance;
    unsigned long long  _hash;
    NSString * _localProductType;
    NSString * _localSystemBuild;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
