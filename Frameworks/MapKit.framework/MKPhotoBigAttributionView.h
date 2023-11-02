
@interface MKPhotoBigAttributionView : UIView <MKPhotoBigAttributionViewSubclass> {
    UIView * _backgroundView;
    UIView * _contentView;
    long long  _context;
    UIImageView * _imageView;
    MKMapItem * _mapItem;
    bool  _needsImageLoad;
    UIActivityIndicatorView * _spinner;
    long long  _type;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)bigAttributionViewForMapItem:(id)arg1 attributionType:(long long)arg2 isFirstParty:(bool)arg3 context:(long long)arg4;

- (void).cxx_destruct;
- (void)beginAnimatingActivityIndicator;
- (id)contentView;
- (long long)context;
- (void)didEndAnimatingActivityIndicatorView;
- (void)didUpdateAttributionViewType;
- (void)didUpdateMapItem;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (id)initWithContext:(long long)arg1;
- (void)layoutSubviews;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (void)setType:(long long)arg1;
- (id)spinner;
- (long long)type;
- (void)updateBackgroundIfNeeded;
- (void)willStartAnimatingActivityIndicatorView;

@end
