
@interface _LSDServiceDomain : NSObject {
    struct optional<unsigned int> { 
        union { 
            BOOL __null_state_; 
            unsigned int __val_; 
        } ; 
        bool __engaged_; 
    }  _resolvedDomainUID;
    unsigned short  _specifierType;
}

+ (id)defaultServiceDomainIndirect;

- (id).cxx_construct;
- (id)debugDescription;

@end
