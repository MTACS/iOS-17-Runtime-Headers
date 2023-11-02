
@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {
    struct shared_ptr<vision::mod::FaceClustering> { 
        struct FaceClustering {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_cancellableUpdate:(void*)arg1 facesToMove:(void*)arg2 requestRevision:(unsigned long long)arg3;
- (id)getClustersWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
