
@interface CDMUserVocabList : NSObject {
    NSArray * _entries;
    NSNumber * _hashValue;
}

@property (nonatomic, readonly) NSArray *entries;
@property (nonatomic, readonly) NSNumber *hashValue;

- (void).cxx_destruct;
- (id)entries;
- (id)hashValue;
- (id)initWithEntries:(id)arg1 hashValue:(id)arg2;

@end
