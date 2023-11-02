
@interface HMMTRReportDescription : HMFObject {
    NSArray * _attributeIds;
    NSString * _clusterClass;
    NSNumber * _clusterId;
    NSString * _clusterSelector;
    NSArray * _eventIds;
    id /* block */  _mapEvent;
    id /* block */  _mapValue;
}

@property (readonly) NSArray *attributeIds;
@property (nonatomic, retain) NSString *clusterClass;
@property (readonly) NSNumber *clusterId;
@property (nonatomic, retain) NSString *clusterSelector;
@property (readonly) NSArray *eventIds;
@property (nonatomic, copy) id /* block */ mapEvent;
@property (nonatomic, copy) id /* block */ mapValue;

- (void).cxx_destruct;
- (id)attributeIds;
- (id)clusterClass;
- (id)clusterId;
- (id)clusterSelector;
- (id)eventIds;
- (id)initWithClusterId:(id)arg1 attributeIds:(id)arg2 eventIds:(id)arg3;
- (id /* block */)mapEvent;
- (id /* block */)mapValue;
- (void)setClusterClass:(id)arg1;
- (void)setClusterSelector:(id)arg1;
- (void)setMapEvent:(id /* block */)arg1;
- (void)setMapValue:(id /* block */)arg1;

@end
