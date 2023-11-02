
@interface PHASEXPCDictionaryWrapper : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _dictionary;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *dictionary;

+ (bool)supportsSecureCoding;
+ (id)wrapperWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
