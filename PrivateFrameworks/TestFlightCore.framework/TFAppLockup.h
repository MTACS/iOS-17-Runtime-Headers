
@interface TFAppLockup : NSObject {
    TFIconArtwork * _iconArtwork;
    NSArray * _subtitles;
    NSString * _title;
}

@property (nonatomic, readonly) TFIconArtwork *iconArtwork;
@property (nonatomic, readonly, copy) NSArray *subtitles;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)iconArtwork;
- (id)initWithTitle:(id)arg1 subtitles:(id)arg2 iconArtwork:(id)arg3;
- (id)subtitles;
- (id)title;

@end
