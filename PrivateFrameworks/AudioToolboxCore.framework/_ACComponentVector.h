
@interface _ACComponentVector : NSObject <NSSecureCoding> {
    struct AudioComponentVector { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { 
            void *__value_; 
        } __end_cap_; 
        bool mSorted; 
    }  mVector;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVector:(const void*)arg1;

@end
