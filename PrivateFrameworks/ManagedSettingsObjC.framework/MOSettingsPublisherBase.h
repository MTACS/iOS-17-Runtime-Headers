
@interface MOSettingsPublisherBase : MOPublisher {
    NSSet * _interestedGroups;
    id /* block */  _startBlock;
    id /* block */  _stopBlock;
    MOPublisher * _upstream;
}

@property (nonatomic, readonly) NSSet *interestedGroups;
@property (nonatomic, readonly) id /* block */ startBlock;
@property (nonatomic, readonly) id /* block */ stopBlock;
@property (nonatomic, readonly) MOPublisher *upstream;

- (void).cxx_destruct;
- (id)initWithUpstream:(id)arg1 interestedGroups:(id)arg2 startBlock:(id /* block */)arg3 stopBlock:(id /* block */)arg4;
- (id)interestedGroups;
- (id /* block */)startBlock;
- (id /* block */)stopBlock;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end
