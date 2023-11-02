
@interface HKFavoritesTableViewCell : UITableViewCell {
    UIImageView * _filledStar;
    UIImageView * _star;
}

@property (getter=isFavorited, nonatomic) bool favorited;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isFavorited;
- (void)setFavorited:(bool)arg1;

@end
