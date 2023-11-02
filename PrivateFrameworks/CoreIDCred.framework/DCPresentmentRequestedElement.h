
@interface DCPresentmentRequestedElement : NSObject <NSSecureCoding> {
    NSString * _elementIdentifier;
    unsigned long long  _intentToRetain;
}

@property (nonatomic, retain) NSString *elementIdentifier;
@property (nonatomic) unsigned long long intentToRetain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)elementIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementIdentifier:(id)arg1 intentToRetain:(unsigned long long)arg2;
- (unsigned long long)intentToRetain;
- (void)setElementIdentifier:(id)arg1;
- (void)setIntentToRetain:(unsigned long long)arg1;

@end
