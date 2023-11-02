
@interface SKAttribute : NSObject <NSSecureCoding> {
    NSString * _name;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _nameString;
    long long  _type;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

+ (id)attributeWithName:(id)arg1 type:(long long)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (const void*)getNameString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (bool)isEqualToAttribute:(id)arg1;
- (id)name;
- (long long)type;

@end
