
@interface HUMosaicCellSize : NSObject {
    unsigned long long  _numCols;
    unsigned long long  _numRows;
    unsigned long long  _sizeDescription;
}

@property (nonatomic) unsigned long long numCols;
@property (nonatomic) unsigned long long numRows;
@property (nonatomic) unsigned long long sizeDescription;

+ (id)createMosaicCellSizeForSizeDescription:(unsigned long long)arg1;

- (unsigned long long)numCols;
- (unsigned long long)numRows;
- (void)setNumCols:(unsigned long long)arg1;
- (void)setNumRows:(unsigned long long)arg1;
- (void)setSizeDescription:(unsigned long long)arg1;
- (unsigned long long)sizeDescription;

@end
