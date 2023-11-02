
@interface OUObjectAsset : NSObject <NSCopying, NSSecureCoding> {
    <OUPointCloud> * _frustumPointCloud;
    NSMutableDictionary * _groups;
    NSMutableArray * _objects;
}

@property (nonatomic, retain) <OUPointCloud> *frustumPointCloud;
@property (nonatomic, retain) NSDictionary *groups;
@property (nonatomic, retain) NSArray *objects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GetAllObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)frustumPointCloud;
- (id)groups;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)objects;
- (void)setFrustumPointCloud:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setObjects:(id)arg1;

@end
