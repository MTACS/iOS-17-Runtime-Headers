
@interface CNHandleStringsContactPredicate : CNPredicate {
    NSArray * _containerIdentifiers;
    NSArray * _handleStrings;
}

@property (nonatomic, readonly, copy) NSArray *containerIdentifiers;
@property (nonatomic, readonly, copy) NSArray *handleStrings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)arg1;
- (void)cn_triageWithLog:(id)arg1 serialNumber:(unsigned long long)arg2;
- (id)containerIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handleStrings;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandleStrings:(id)arg1;
- (id)initWithHandleStrings:(id)arg1 containerIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)shortDebugDescription;

@end
