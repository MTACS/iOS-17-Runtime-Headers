
@interface _REElementRankerWrapper : NSObject <REMLElementRanker> {
    REMLElementComparator * _comparator;
    id /* block */  _featureMapGenerator;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) REMLElementComparator *comparator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ featureMapGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)comparator;
- (id /* block */)featureMapGenerator;
- (id)queue;
- (void)setComparator:(id)arg1;
- (void)setFeatureMapGenerator:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (bool)shouldHideElement:(id)arg1;

@end
