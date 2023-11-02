
@interface SHClusterJSONLReader : NSObject <SHJSONLDataDetokenizerDelegate> {
    id /* block */  _callback;
    unsigned long long  _index;
}

@property (nonatomic, copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long index;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)importClusters:(id)arg1 toParentCluster:(id)arg2 startIndex:(unsigned long long)arg3;
- (unsigned long long)index;
- (bool)parsedJSONObject:(id)arg1 error:(id*)arg2;
- (bool)readDataLineByLineFromURL:(id)arg1 error:(id*)arg2 callback:(id /* block */)arg3;
- (void)setCallback:(id /* block */)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
