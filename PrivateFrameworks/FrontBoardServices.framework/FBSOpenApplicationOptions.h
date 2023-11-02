
@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying> {
    NSMutableDictionary * _payload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)optionsWithDictionary:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)_sanitizeAndValidatePayload;
- (void)_updateOption:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionary;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)url;

@end
