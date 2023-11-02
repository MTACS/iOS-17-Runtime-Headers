
@interface _NUTaggedSpace : NSObject <NSCopying> {
    NUSpace * _space;
    NSMutableArray * _tagNodes;
}

@property (readonly) NUSpace *space;

- (void).cxx_destruct;
- (void)addTagNode:(id)arg1;
- (void)addTagNodes:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasTransform;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTaggedImageSpace:(id)arg1;
- (void)mergeSpace:(id)arg1;
- (id)space;
- (id)tagNodes;

@end
