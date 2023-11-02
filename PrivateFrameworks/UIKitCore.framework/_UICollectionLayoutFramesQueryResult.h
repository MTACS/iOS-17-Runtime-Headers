
@interface _UICollectionLayoutFramesQueryResult : NSObject <NSCopying> {
    long long  _auxillaryKind;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    long long  _index;
    bool  _isFrameAdjustedForPinning;
    NSCollectionLayoutItem * _item;
    long long  _resultKind;
    NSUUID * _supplementaryEnrollmentIdentifier;
    long long  _zIndex;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
