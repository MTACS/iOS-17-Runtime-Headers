
@interface TISupplementalItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _identifier;
}

@property (nonatomic, readonly) unsigned long long identifier;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSupplementalItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (void)core_appendEntitiesToArray:(id)arg1;
- (bool)core_isEqualToMecabraCandidate:(id)arg1;
- (id)core_nameReadingPairsWithGenerationMode:(unsigned char)arg1 mecabraEnvironment:(id)arg2;
- (id)core_nonPhoneticRangesInString:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;

@end
