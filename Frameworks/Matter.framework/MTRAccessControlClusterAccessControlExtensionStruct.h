
@interface MTRAccessControlClusterAccessControlExtensionStruct : NSObject <NSCopying> {
    NSData * _data;
    NSNumber * _fabricIndex;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSNumber *fabricIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)fabricIndex;
- (id)init;
- (void)setData:(id)arg1;
- (void)setFabricIndex:(id)arg1;

@end
