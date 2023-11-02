
@interface ASDDSPGraphInfo : ASDDSPItemInfo {
    NSArray * _includePaths;
    NSString * _path;
    NSDictionary * _substitutions;
    NSString * _text;
}

@property (nonatomic, copy) NSArray *includePaths;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSDictionary *substitutions;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)includePaths;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)path;
- (void)setIncludePaths:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSubstitutions:(id)arg1;
- (void)setText:(id)arg1;
- (id)substitutions;
- (id)text;

@end
