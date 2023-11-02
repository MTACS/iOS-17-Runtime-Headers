
@interface LNSystemProtocolParameter : NSObject <NSSecureCoding> {
    long long  _vocabularyModel;
}

@property (nonatomic, readonly) long long vocabularyModel;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVocabularyModel:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)vocabularyModel;

@end
