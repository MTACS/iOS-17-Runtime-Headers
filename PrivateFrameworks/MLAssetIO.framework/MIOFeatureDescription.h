
@interface MIOFeatureDescription : NSObject <NSMutableCopying> {
    NSString * _cachedName;
    <MIOFeatureValueConstraint> * _constraint;
    struct FeatureDescription { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        struct ArenaStringPtr { 
            void *ptr_; 
        } name_; 
        struct ArenaStringPtr { 
            void *ptr_; 
        } shortdescription_; 
        struct FeatureType {} *type_; 
        int _cached_size_; 
    }  _featureDescriptionParams;
}

@property (nonatomic, readonly, copy) <MIOFeatureValueConstraint> *constraint;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool optional;
@property (nonatomic, readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) long long type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)constraint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (const void*)featureDescriptionSpecification;
- (unsigned long long)hash;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (bool)optional;
- (void)setShortDescription:(id)arg1;
- (id)shortDescription;
- (long long)type;

@end
