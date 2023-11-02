
@interface MSVLyricsSection : MSVLyricsElement {
    NSArray * _lines;
    long long  _songPart;
    NSString * _songPartText;
}

@property (nonatomic, retain) NSArray *lines;
@property (nonatomic) long long songPart;
@property (nonatomic, copy) NSString *songPartText;

+ (long long)_songPartForText:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)lines;
- (void)setLines:(id)arg1;
- (void)setSongPart:(long long)arg1;
- (void)setSongPartText:(id)arg1;
- (long long)songPart;
- (id)songPartText;

@end
