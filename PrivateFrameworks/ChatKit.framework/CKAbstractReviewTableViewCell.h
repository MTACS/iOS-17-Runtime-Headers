
@interface CKAbstractReviewTableViewCell : UITableViewCell {
    UILabel * _lastModifiedLabel;
    UILabel * _nameLabel;
    unsigned long long  _size;
    UILabel * _sizeLabel;
}

@property (nonatomic, retain) UILabel *lastModifiedLabel;
@property (nonatomic, retain) NSString *mainText;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) UILabel *sizeLabel;
@property (nonatomic, retain) NSString *subheadingText;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)lastModifiedLabel;
- (void)layoutSubviews;
- (id)mainText;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setLastModifiedLabel:(id)arg1;
- (void)setMainText:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSizeLabel:(id)arg1;
- (void)setSubheadingText:(id)arg1;
- (unsigned long long)size;
- (id)sizeLabel;
- (id)subheadingText;

@end
