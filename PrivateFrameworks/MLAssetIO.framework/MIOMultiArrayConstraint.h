
@interface MIOMultiArrayConstraint : NSObject <MIOFeatureValueConstraint> {
    struct ArrayFeatureType { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        struct RepeatedField<long long> { 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } shape_; 
        int _shape_cached_byte_size_; 
        int datatype_; 
        union ShapeFlexibilityUnion { 
            struct ArrayFeatureType_EnumeratedShapes {} *enumeratedshapes_; 
            struct ArrayFeatureType_ShapeRange {} *shaperange_; 
        } ShapeFlexibility_; 
        union DefaultOptionalValueUnion { 
            int intdefaultvalue_; 
            float floatdefaultvalue_; 
            double doubledefaultvalue_; 
        } defaultOptionalValue_; 
        int _cached_size_; 
        unsigned int _oneof_case_[2]; 
    }  _arrayFeatureTypeParams;
    NSArray * _shape;
    MIOMultiArrayShapeConstraint * _shapeConstraint;
}

@property (nonatomic, readonly) long long dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly, copy) MIOMultiArrayShapeConstraint *shapeConstraint;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)arrayFeatureTypeSpecification;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)shape;
- (id)shapeConstraint;

@end
