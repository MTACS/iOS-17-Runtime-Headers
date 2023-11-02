
@interface AVMovieInternal : NSObject {
    NSURL * URL;
    NSData * data;
    NSDictionary * initializationOptions;
    AVAssetInspectorLoader * loader;
    AVDispatchOnce * makeTracksArrayOnce;
    NSArray * tracks;
}

- (void).cxx_destruct;

@end
