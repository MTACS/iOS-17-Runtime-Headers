
@interface _UICollectionPreferredSizes : NSObject <NSCopying> {
    long long  _frameOffset;
    NSMutableIndexSet * _indexes;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestItemSize;
    NSMutableDictionary * _sizes;
    <_UICollectionLayoutAuxillaryOffsets> * _supplementaryBaseOffsets;
    NSMutableDictionary * _supplementarySizesDict;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;

@end
