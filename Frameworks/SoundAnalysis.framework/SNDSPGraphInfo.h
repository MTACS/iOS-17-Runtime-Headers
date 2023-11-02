
@interface SNDSPGraphInfo : SNDSPItemInfo {
    NSArray * _includePaths;
    NSString * _path;
    NSDictionary * _substitutions;
    NSString * _text;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
