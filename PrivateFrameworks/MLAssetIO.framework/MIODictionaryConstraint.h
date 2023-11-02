
@interface MIODictionaryConstraint : NSObject <MIOFeatureValueConstraint> {
    struct DictionaryFeatureType { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        union KeyTypeUnion { 
            struct Int64FeatureType {} *int64keytype_; 
            struct StringFeatureType {} *stringkeytype_; 
        } KeyType_; 
        int _cached_size_; 
        unsigned int _oneof_case_[1]; 
    }  _dictionaryFeatureTypeParams;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long keyType;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (const void*)dictionaryFeatureTypeSpecification;
- (unsigned long long)hash;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (long long)keyType;

@end
