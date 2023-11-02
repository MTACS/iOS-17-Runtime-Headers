
@interface PodcastsFoundation.DownloadableURLOptions : NSObject {
    void nonAppInitiated;
    void urlRawString;
}

@property (nonatomic) bool nonAppInitiated;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *urlRawString;

- (void).cxx_destruct;
- (id)init;
- (id)init:(id)arg1 nonAppInitiated:(bool)arg2;
- (id)initWithUrl:(id)arg1 nonAppInitiated:(bool)arg2;
- (bool)nonAppInitiated;
- (void)setNonAppInitiated:(bool)arg1;
- (id)url;
- (id)urlRawString;

@end
