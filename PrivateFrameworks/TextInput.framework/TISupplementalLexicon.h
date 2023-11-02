
@interface TISupplementalLexicon : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _identifier;
    NSArray * _items;
    unsigned long long  _searchPrefixes;
}

@property (nonatomic, readonly) NSCharacterSet *core_searchPrefixSet;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) unsigned short searchPrefixCharacter;
@property (nonatomic) unsigned long long searchPrefixes;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 searchPrefixes:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSupplementalLexicon:(id)arg1;
- (id)items;
- (unsigned short)searchPrefixCharacter;
- (unsigned long long)searchPrefixes;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setItems:(id)arg1;
- (void)setSearchPrefixes:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (id)core_searchPrefixSet;

@end
