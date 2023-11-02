
@interface WFResourceNode : NSObject <WFResourceNodeDelegate> {
    <WFResourceNodeDelegate> * _delegate;
    WFResource * _resource;
    NSArray * _subnodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFResourceNodeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFResource *resource;
@property (nonatomic, readonly) NSArray *subnodes;
@property (readonly) Class superclass;

+ (id)nodesWithDefinitions:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithDefinition:(id)arg1;
- (id)initWithResource:(id)arg1;
- (id)initWithResource:(id)arg1 subnodes:(id)arg2;
- (void)refreshAvailability;
- (id)resource;
- (void)resourceNodeAvailabilityChanged:(id)arg1;
- (void)resourceUpdated;
- (void)setDelegate:(id)arg1;
- (id)subnodes;

@end
