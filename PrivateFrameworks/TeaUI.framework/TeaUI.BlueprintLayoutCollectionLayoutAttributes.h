
@interface TeaUI.BlueprintLayoutCollectionLayoutAttributes : UICollectionViewLayoutAttributes {
    void dedupIdentifier;
    void isEditing;
    void isPlugin;
    void isSelected;
    void model;
    void pinTrait;
    void rubberbandEdge;
    void rubberbandTrait;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  source;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
