
@interface BSServiceSpecification : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _derived;
    bool  _hiddenAtLaunch;
    NSString * _identifier;
    NSDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDerived, nonatomic, readonly) bool derived;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenAtLaunch, nonatomic, readonly) bool hiddenAtLaunch;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isDerived;
- (bool)isEqual:(id)arg1;
- (bool)isHiddenAtLaunch;
- (id)optionForKey:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
