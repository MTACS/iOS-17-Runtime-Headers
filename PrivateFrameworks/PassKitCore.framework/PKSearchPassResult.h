
@interface PKSearchPassResult : NSObject <PKSearchAutocompleteToken> {
    NSString * _passUniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passUniqueIdentifier;
- (void)setPassUniqueIdentifier:(id)arg1;
- (unsigned long long)tokenType;

@end
