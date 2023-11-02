
@interface BSObjCProtocol : NSObject <BSDescriptionProviding, NSCopying> {
    NSArray * _inheritedProtocols;
    NSArray * _methods;
    NSString * _name;
    NSArray * _properties;
    Protocol * _protocol;
    bool  _virtual;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *inheritedProtocols;
@property (nonatomic, readonly, copy) NSArray *methods;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *properties;
@property (nonatomic, readonly, retain) Protocol *protocol;
@property (readonly) Class superclass;

+ (id)protocolForProtocol:(id)arg1;
+ (id)protocolForProtocol:(id)arg1 interpreter:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)flattenWithIgnoredInheritedProtocols:(id)arg1;
- (unsigned long long)hash;
- (id)inheritedProtocolForProtocol:(id)arg1;
- (id)inheritedProtocols;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)methodForSelector:(SEL)arg1;
- (id)methods;
- (id)name;
- (id)properties;
- (id)protocol;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
