
@interface _MDLProbeCluster : NSObject {
    void _centroid;
    NSMutableSet * _probes;
}

@property void centroid;
@property (retain) NSMutableSet *probes;

- (void).cxx_destruct;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)arg1;
- (void)centroid;
- (unsigned long long)hash;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCluster:(id)arg1;
- (id)probes;
- (void)setCentroid;
- (void)setProbes:(id)arg1;

@end
