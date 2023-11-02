
@interface SNPropertyStripInfo : SNDSPItemInfo {
    NSString * _path;
    NSString * _resourcePath;
    NSDictionary * _value;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
