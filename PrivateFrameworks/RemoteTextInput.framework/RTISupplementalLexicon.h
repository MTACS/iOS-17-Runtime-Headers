
@interface RTISupplementalLexicon : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _iconForIdentifier;
    TISupplementalLexicon * _lexicon;
}

@property (nonatomic, retain) NSDictionary *iconForIdentifier;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) TISupplementalLexicon *lexicon;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateSupplementalItems:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)iconForIdentifier;
- (id)iconForIdentifier:(unsigned long long)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTISupplementalLexicon:(id)arg1 iconForIdentifier:(id)arg2;
- (id)initWithTISupplementalLexicon:(id)arg1 iconProvider:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (id)lexicon;
- (void)setIconForIdentifier:(id)arg1;

@end
