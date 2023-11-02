
@interface PLInterest : NSObject {
    NSKnownKeysMappingStrategy * _allKeysMappingStrategy;
    unsigned long long  _indexesOfInterest;
}

@property (nonatomic, retain) NSKnownKeysMappingStrategy *allKeysMappingStrategy;
@property (nonatomic) unsigned long long indexesOfInterest;

- (void).cxx_destruct;
- (id)allKeysMappingStrategy;
- (unsigned long long)indexesOfInterest;
- (void)setAllKeysMappingStrategy:(id)arg1;
- (void)setIndexesOfInterest:(unsigned long long)arg1;

@end
