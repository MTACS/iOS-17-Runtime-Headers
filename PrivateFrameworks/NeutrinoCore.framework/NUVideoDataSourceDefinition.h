
@interface NUVideoDataSourceDefinition : NUSingleSourceDefinition {
    long long  _orientation;
    NSData * _videoData;
}

@property (readonly) long long orientation;
@property (readonly) NSData *videoData;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithVideoData:(id)arg1 orientation:(long long)arg2;
- (long long)mediaType;
- (long long)orientation;
- (id)videoData;

@end
