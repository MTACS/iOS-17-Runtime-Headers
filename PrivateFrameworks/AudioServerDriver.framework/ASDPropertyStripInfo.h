
@interface ASDPropertyStripInfo : ASDDSPItemInfo {
    NSString * _path;
    NSDictionary * _value;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSDictionary *value;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)path;
- (id)value;

@end
