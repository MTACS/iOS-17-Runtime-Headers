
@interface PKFieldMetadata : NSObject <NSSecureCoding> {
    NSArray * _associatedPassIdentifiers;
    bool  _foundExplicitlyRequestedPass;
    bool  _shouldIgnoreField;
}

@property (nonatomic, readonly, copy) NSArray *associatedPassIdentifiers;
@property (nonatomic, readonly) bool foundExplicitlyRequestedPass;
@property (nonatomic, readonly) bool shouldIgnoreField;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedPassIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (bool)foundExplicitlyRequestedPass;
- (id)init;
- (id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(bool)arg2 foundExplicitlyRequestedPass:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)shouldIgnoreField;

@end
