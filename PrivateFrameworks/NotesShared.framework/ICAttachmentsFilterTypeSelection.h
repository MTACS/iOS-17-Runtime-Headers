
@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection {
    unsigned long long  _selectionType;
}

@property (nonatomic) unsigned long long selectionType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)filterName;
- (long long)filterType;
- (unsigned long long)hash;
- (id)initWithAttachmentSection:(short)arg1;
- (id)initWithSelectionType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICAttachmentsFilterTypeSelection:(id)arg1;
- (id)rawFilterValue;
- (unsigned long long)selectionType;
- (void)setSelectionType:(unsigned long long)arg1;

@end
