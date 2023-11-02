
@interface MPStoreLyricsResponse : NSObject {
    NSString * _lyricsContent;
    NSString * _lyricsID;
}

@property (nonatomic, retain) NSString *lyricsContent;
@property (nonatomic, retain) NSString *lyricsID;

- (void).cxx_destruct;
- (id)lyricsContent;
- (id)lyricsID;
- (void)setLyricsContent:(id)arg1;
- (void)setLyricsID:(id)arg1;

@end
