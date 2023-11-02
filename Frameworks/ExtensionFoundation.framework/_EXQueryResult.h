
@interface _EXQueryResult : NSObject <NSSecureCoding> {
    _EXExtensionAvailablility * _availablility;
    NSSet * _identities;
}

@property (readonly) _EXExtensionAvailablility *availablility;
@property (readonly) NSSet *identities;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentities:(id)arg1 availablility:(id)arg2;
- (id)availablility;
- (void)encodeWithCoder:(id)arg1;
- (id)identities;
- (id)initWithAvailablility:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentities:(id)arg1;
- (id)initWithIdentities:(id)arg1 availablility:(id)arg2;

@end
