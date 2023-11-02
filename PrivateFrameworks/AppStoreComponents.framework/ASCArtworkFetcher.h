
@interface ASCArtworkFetcher : NSObject {
    ASCTaskCoordinator * _fetchCoordinator;
    double  _scale;
    NSURLSession * _urlSession;
}

@property (nonatomic, readonly) ASCTaskCoordinator *fetchCoordinator;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) NSURLSession *urlSession;

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (id)URLWithContentsOfArtwork:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)dataWithContentsOfURL:(id)arg1;
- (id)fetchCoordinator;
- (id)imageForContentsOfArtwork:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)imageWithContentsOfURL:(id)arg1;
- (id)initWithURLSession:(id)arg1 scale:(double)arg2;
- (double)scale;
- (id)urlSession;

@end
