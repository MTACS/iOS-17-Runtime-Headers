
@interface MLMovieArtist : NSObject <NSCopying> {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, copy) NSNumber *ITunesStoreIdentifier;
@property (nonatomic, copy) NSString *artistName;

- (void).cxx_destruct;
- (id)ITunesStoreIdentifier;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)artistName;
- (id)copyMovieArtistDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMovieArtistDictionary:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setITunesStoreIdentifier:(id)arg1;

@end
