
@interface CKVCustomTerm : NSObject <CKVocabularyItem, NSSecureCoding> {
    NSString * _itemId;
    NSString * _term;
    NSString * _vocabularyId;
    unsigned short  _vocabularyType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *term;
@property (nonatomic, readonly) NSString *vocabularyId;
@property (nonatomic, readonly) unsigned short vocabularyType;

+ (id)customTermFromItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemId:(id)arg1 vocabularyType:(unsigned short)arg2 term:(id)arg3;
- (id)initWithItemId:(id)arg1 vocabularyType:(unsigned short)arg2 term:(id)arg3 vocabularyId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCustomTerm:(id)arg1;
- (id)itemId;
- (id)term;
- (id)toItemWithError:(id*)arg1;
- (id)vocabularyId;
- (unsigned short)vocabularyType;

@end
