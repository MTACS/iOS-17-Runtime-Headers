
@interface NSDocumentDifferenceSize : NSObject {
    long long  _changeCount;
    long long  _generationCount;
}

@property (nonatomic) long long changeCount;
@property (nonatomic) long long generationCount;

- (long long)changeCount;
- (id)description;
- (long long)generationCount;
- (void)setChangeCount:(long long)arg1;
- (void)setGenerationCount:(long long)arg1;

@end
