
@interface NUMultipleSourceContainerNode : NUSourceContainerNode {
    NSArray * _sources;
}

@property (retain) NSArray *sources;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithSourceNodes:(id)arg1 assetIdentifier:(id)arg2;
- (id)primarySourceNode;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(struct { long long x1; long long x2; }*)arg2 error:(out id*)arg3;
- (void)setSources:(id)arg1;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2;
- (id)sources;

@end
