
@interface UVPropertyList : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeWithAnyCoder:(id)arg1;
- (id)_initWithAnyCoder:(id)arg1;
- (id)dictionary;
- (void)encodeToXpcDictionary:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXpcDictionary:(id)arg1;

@end
