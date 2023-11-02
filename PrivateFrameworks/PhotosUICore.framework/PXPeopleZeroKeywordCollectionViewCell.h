
@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell {
    UIView * _peopleContentView;
}

@property (nonatomic, retain) UIView *peopleContentView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)peopleContentView;
- (void)prepareForReuse;
- (void)setPeople:(id)arg1 withThumbnailSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setPeopleContentView:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;

@end
