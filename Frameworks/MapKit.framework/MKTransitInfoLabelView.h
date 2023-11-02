
@interface MKTransitInfoLabelView : _MKUILabel {
    MKArtworkDataSourceCache * _artworkCache;
    bool  _hasCustomFont;
    bool  _hasCustomIconSize;
    bool  _hasCustomShieldSize;
    long long  _iconSize;
    NSArray * _labelItems;
    double  _maxShieldHeight;
    double  _maxWidth;
    long long  _shieldSize;
    double  _spaceBetweenIcons;
    double  _spaceBetweenShields;
    id /* block */  _textForTruncationGenerator;
}

@property (nonatomic, retain) MKArtworkDataSourceCache *artworkCache;
@property (nonatomic) long long iconSize;
@property (nonatomic, copy) NSArray *labelItems;
@property (nonatomic) double maxShieldHeight;
@property (nonatomic) long long shieldSize;
@property (nonatomic) double spaceBetweenShields;

+ (long long)iconSizeForContentSizeCategory:(id)arg1;
+ (long long)shieldSizeForContentSizeCategory:(id)arg1;
+ (id)stringAttributesForFont:(id)arg1 lineBreakMode:(long long)arg2;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_generateText;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)_setFont:(id)arg1 custom:(bool)arg2;
- (void)_setupLabelInfo;
- (id)_stringAttributes;
- (id)artworkCache;
- (void)dealloc;
- (long long)iconSize;
- (id)init;
- (id)initWithLabelItems:(id)arg1 iconSize:(long long)arg2 shieldSize:(long long)arg3 spaceBetweenShields:(double)arg4 maxWidth:(double)arg5;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)labelItems;
- (double)maxShieldHeight;
- (void)setArtworkCache:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setLabelItems:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMaxShieldHeight:(double)arg1;
- (void)setMaxWidth:(double)arg1 textForTruncationGenerator:(id /* block */)arg2;
- (void)setShieldSize:(long long)arg1;
- (void)setSpaceBetweenIcons:(double)arg1;
- (void)setSpaceBetweenShields:(double)arg1;
- (long long)shieldSize;
- (double)spaceBetweenShields;

@end
