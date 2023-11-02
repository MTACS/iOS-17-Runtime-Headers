
@interface GDVUStreamingGallery : NSObject {
    void inner;
}

- (void).cxx_destruct;
- (id)addWithObservations:(id)arg1 observationIdentifiers:(id)arg2 trackIdentifiers:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithClient:(id)arg1 error:(id*)arg2;
- (bool)resetAndReturnError:(id*)arg1;
- (id)updateWithMaxKeyFacesPerCluster:(long long)arg1 error:(id*)arg2;
- (id)updateWithMaxKeyFacesPerCluster:(long long)arg1 sortBy:(id)arg2 error:(id*)arg3;

@end
