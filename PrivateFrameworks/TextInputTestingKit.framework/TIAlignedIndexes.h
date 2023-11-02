
@interface TIAlignedIndexes : NSObject {
    unsigned long long  _index1;
    unsigned long long  _index2;
}

@property (nonatomic) unsigned long long index1;
@property (nonatomic) unsigned long long index2;

- (id)description;
- (unsigned long long)index1;
- (unsigned long long)index2;
- (void)setIndex1:(unsigned long long)arg1;
- (void)setIndex2:(unsigned long long)arg1;

@end
