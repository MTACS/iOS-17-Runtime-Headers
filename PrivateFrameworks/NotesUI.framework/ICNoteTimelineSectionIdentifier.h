
@interface ICNoteTimelineSectionIdentifier : ICNoteSectionIdentifier {
    NSDate * _referenceDate;
    NSString * _sectionTitle;
    unsigned long long  _sortOrder;
    long long  _timelineSectionType;
}

@property (nonatomic, copy) NSDate *referenceDate;
@property (nonatomic, copy) NSString *sectionTitle;
@property (nonatomic) unsigned long long sortOrder;
@property (nonatomic) long long timelineSectionType;

+ (id)sortDescriptorsWithDirection:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithTimelineSectionType:(long long)arg1 referenceDate:(id)arg2 title:(id)arg3 sortOrder:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICNoteTimelineSectionIdentifier:(id)arg1;
- (id)referenceDate;
- (id)sectionTitle;
- (void)setReferenceDate:(id)arg1;
- (void)setSectionTitle:(id)arg1;
- (void)setSortOrder:(unsigned long long)arg1;
- (void)setTimelineSectionType:(long long)arg1;
- (unsigned long long)sortOrder;
- (long long)timelineSectionType;
- (id)title;
- (id)typeString;

@end
