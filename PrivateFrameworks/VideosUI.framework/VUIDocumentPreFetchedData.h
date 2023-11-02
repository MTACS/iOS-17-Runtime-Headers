
@interface VUIDocumentPreFetchedData : NSObject {
    NSDictionary * _prefetchedDataDict;
}

@property (nonatomic, copy) NSDictionary *prefetchedDataDict;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)prefetchedDataDict;
- (void)setPrefetchedDataDict:(id)arg1;

@end
