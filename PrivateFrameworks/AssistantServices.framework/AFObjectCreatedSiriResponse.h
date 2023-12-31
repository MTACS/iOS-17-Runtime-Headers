
@interface AFObjectCreatedSiriResponse : AFSiriResponse {
    NSURL * _objectIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 objectIdentifier:(id)arg2;
- (id)_objectIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
