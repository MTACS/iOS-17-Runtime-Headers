
@interface BKSTouchAnnotation : NSObject <BSDescriptionProviding, NSSecureCoding> {
    NSString * _text;
    unsigned int  _touchIdentifier;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTouchIdentifier:(unsigned int)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)text;
- (unsigned int)touchIdentifier;
- (id)uniqueIdentifier;

@end
