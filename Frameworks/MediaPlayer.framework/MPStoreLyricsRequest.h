
@interface MPStoreLyricsRequest : NSObject <NSCopying> {
    MPModelSong * _song;
}

@property (nonatomic, retain) MPModelSong *song;

+ (bool)supportsLyricsForURLBag:(id)arg1;
+ (bool)supportsLyricsForURLBagDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setSong:(id)arg1;
- (id)song;

@end
