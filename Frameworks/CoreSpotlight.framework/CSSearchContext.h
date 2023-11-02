
@interface CSSearchContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _keyboardLanguage;
    NSString * _markedText;
    unsigned long long  _markedTextStart;
    unsigned long long  _maxItemsCount;
    NSArray * _preferredLanguages;
    unsigned long long  _queryID;
    NSString * _userQuery;
}

@property (readonly) NSString *keyboardLanguage;
@property (readonly) NSString *markedText;
@property (readonly) unsigned long long markedTextStart;
@property (readonly) unsigned long long maxItemsCount;
@property (readonly) NSArray *preferredLanguages;
@property (readonly) unsigned long long queryID;
@property (readonly) NSString *userQuery;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpc_dictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5;
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 markedText:(id)arg6 markedTextStart:(unsigned long long)arg7;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyboardLanguage;
- (id)markedText;
- (unsigned long long)markedTextStart;
- (unsigned long long)maxItemsCount;
- (id)preferredLanguages;
- (unsigned long long)queryID;
- (id)userQuery;
- (id)xpc_dictionary;

@end
