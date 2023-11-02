
@interface TVPMediaItemProductPlacementInfo : NSObject {
    NSNumber * _duration;
    NSString * _imageUrlStringFormat;
    NSString * _localizedInfoString;
}

@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSString *imageUrlStringFormat;
@property (nonatomic, retain) NSString *localizedInfoString;

- (void).cxx_destruct;
- (id)description;
- (id)duration;
- (id)imageUrlStringFormat;
- (id)initWithLocalizedProductPlacementInfoString:(id)arg1 duration:(id)arg2 andImageURLStringFormat:(id)arg3;
- (id)localizedInfoString;
- (void)setDuration:(id)arg1;
- (void)setImageUrlStringFormat:(id)arg1;
- (void)setLocalizedInfoString:(id)arg1;

@end
