
@interface CKAppIconCollectionViewCell : UICollectionViewCell {
    CKAppIconView * _appContentView;
    UIImageView * _appIconView;
    long long  _appName;
    NSMutableArray * _constraints;
}

@property (nonatomic, retain) CKAppIconView *appContentView;
@property (nonatomic, retain) UIImageView *appIconView;
@property (nonatomic) long long appName;
@property (nonatomic, retain) NSMutableArray *constraints;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)appContentView;
- (id)appIconForBundleID:(id)arg1;
- (id)appIconView;
- (long long)appName;
- (void)configureWithAppName:(long long)arg1;
- (id)constraints;
- (void)prepareForReuse;
- (void)setAppContentView:(id)arg1;
- (void)setAppIconView:(id)arg1;
- (void)setAppName:(long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)updateConstraints;

@end
