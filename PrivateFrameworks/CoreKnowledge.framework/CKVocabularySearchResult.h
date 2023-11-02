
@interface CKVocabularySearchResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _originAppId;
    NSObject<CKVocabularyItem> * _vocabularyItem;
}

@property (nonatomic, readonly) NSString *originAppId;
@property (nonatomic, readonly) NSObject<CKVocabularyItem> *vocabularyItem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVocabularyItem:(id)arg1 originAppId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSearchResult:(id)arg1;
- (id)originAppId;
- (id)vocabularyItem;

@end
