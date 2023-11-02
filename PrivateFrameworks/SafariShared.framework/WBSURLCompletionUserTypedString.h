
@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {
    const char * _chars;
    NSArray * _components;
    bool  _containsAnySpaces;
    int  _length;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _ownsChars;
    bool  _ownsUnichars;
    NSString * _searchQueryParameterString;
    NSString * _string;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _stringOnlyContainsWhitespaces;
    NSString * _stringWithoutWhitespace;
    WBSURLCompletionUserTypedString * _typedStringForURLMatching;
    const unsigned short * _unichars;
}

@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSString *normalizedString;
@property (nonatomic, readonly) NSString *searchQueryParameterString;
@property (nonatomic, readonly) NSString *stringWithoutWhitespace;
@property (nonatomic, readonly) WBSURLCompletionUserTypedString *typedStringForURLMatching;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)components;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)normalizedString;
- (id)searchQueryParameterString;
- (id)stringWithoutWhitespace;
- (id)typedStringForURLMatching;

@end
