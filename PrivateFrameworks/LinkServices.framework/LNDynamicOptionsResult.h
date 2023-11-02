
@interface LNDynamicOptionsResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _dependentParameterIdentifiers;
    LNStaticDeferredLocalizedString * _promptLabel;
    NSArray * _sections;
    bool  _usesIndexedCollation;
}

@property (nonatomic, readonly) NSArray *dependentParameterIdentifiers;
@property (nonatomic, readonly) LNStaticDeferredLocalizedString *promptLabel;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) bool usesIndexedCollation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dependentParameterIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 usesIndexedCollation:(bool)arg2 promptLabel:(id)arg3 dependentParameterIdentifiers:(id)arg4;
- (id)promptLabel;
- (id)sections;
- (bool)usesIndexedCollation;

@end
