
@interface BSObjCMethod : NSObject <BSDescriptionProviding> {
    NSArray * _arguments;
    NSString * _encoding;
    NSString * _name;
    long long  _required;
    BSObjCValue * _returnValue;
    SEL  _selector;
}

@property (nonatomic, readonly, retain) NSArray *arguments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *encoding;
@property (nonatomic, readonly, retain) BSObjCValue *firstArgument;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) BSObjCValue *lastArgument;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, retain) BSObjCValue *returnValue;
@property (nonatomic, readonly) SEL selector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)arguments;
- (id)copyAsOnewayVoid;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)encoding;
- (id)firstArgument;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastArgument;
- (id)name;
- (id)returnValue;
- (SEL)selector;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
