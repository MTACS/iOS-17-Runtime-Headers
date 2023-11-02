
@interface LPiTunesMediaAsset : NSObject {
    NSURL * _URL;
    NSDictionary * _colors;
    NSString * _curatorID;
    MPStoreLyricsSnippetURLComponents * _lyricComponents;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSDictionary *colors;
@property (nonatomic, readonly, retain) LPFetcher *fetcher;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)URL;
- (id)colors;
- (id)fetcher;
- (id)initWithImageURL:(id)arg1 colors:(id)arg2 name:(id)arg3;
- (id)initWithName:(id)arg1 curatorID:(id)arg2;
- (id)initWithName:(id)arg1 lyricComponents:(id)arg2;
- (id)initWithVideoURL:(id)arg1 name:(id)arg2;
- (id)metadata;
- (id)name;

@end
