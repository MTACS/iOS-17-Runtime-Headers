
@interface MIOSequenceConstraint : NSObject <MIOFeatureValueConstraint> {
    struct SequenceFeatureType { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        struct SizeRange {} *sizerange_; 
        union TypeUnion { 
            struct Int64FeatureType {} *int64type_; 
            struct StringFeatureType {} *stringtype_; 
        } Type_; 
        int _cached_size_; 
        unsigned int _oneof_case_[1]; 
    }  _sequenceFeatureTypeParams;
    MIOFeatureDescription * _valueDescription;
}

@property (nonatomic, readonly) struct _MIORange { long long x1; long long x2; } countRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MIOFeatureDescription *valueDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _MIORange { long long x1; long long x2; })countRange;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (const void*)sequenceFeatureTypeSpecification;
- (id)valueDescription;

@end
