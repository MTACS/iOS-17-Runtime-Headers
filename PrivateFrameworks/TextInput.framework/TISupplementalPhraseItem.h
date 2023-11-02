
@interface TISupplementalPhraseItem : TISupplementalItem {
    NSString * _phoneticTitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *phoneticTitle;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 phoneticTitle:(id)arg2;
- (id)phoneticTitle;
- (void)setPhoneticTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (void)core_appendEntitiesToArray:(id)arg1;
- (bool)core_isEqualToMecabraCandidate:(id)arg1;
- (id)core_nameReadingPairsWithGenerationMode:(unsigned char)arg1 mecabraEnvironment:(id)arg2;
- (id)core_nonPhoneticRangesInString:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;

@end
