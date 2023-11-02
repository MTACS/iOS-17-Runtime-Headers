
@interface _CSStore : NSObject <NSSecureCoding> {
    _CSStoreAccessContext * _accessContext;
    struct Store { 
        id dataContainer; 
        struct array<unsigned int, 64UL> { 
            unsigned int __elems_[64]; 
        } tableOffsets; 
        struct Table {} *arrayTable; 
        struct Table {} *stringTable; 
        struct Table {} *dictionaryTable; 
        struct atomic<long long> { 
            struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { 
                _Atomic long long __a_value; 
            } __a_; 
        } enumerationState; 
        struct atomic<long long> { 
            struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { 
                _Atomic long long __a_value; 
            } __a_; 
        } getNSDataCallCount; 
        struct Pedigree { 
            unsigned long long family; 
            struct optional<unsigned int> { 
                union { 
                    BOOL __null_state_; 
                    unsigned int __val_; 
                } ; 
                bool __engaged_; 
            } generationAtCopyTime; 
        } pedigree; 
        struct { 
            unsigned int readonly : 1; 
        } flags; 
    }  _store;
}

@property (getter=isReadOnly, setter=setReadOnly:, nonatomic) bool readOnly;

+ (void)initialize;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initByMovingStore:(void*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (bool)isReadOnly;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1 error:(id*)arg2;
- (void)setAccessContext:(id)arg1;
- (void)setReadOnly:(bool)arg1;

@end
