
@interface HKCodableDismissibleCellHeaderViewModel : PBCodable <NSCopying> {
    HKCodableColorRepresentation * _backgroundColor;
    HKCodableCellHeaderViewModel * _viewModel;
}

@property (nonatomic, retain) HKCodableColorRepresentation *backgroundColor;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic, retain) HKCodableCellHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundColor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;
- (void)writeTo:(id)arg1;

@end
