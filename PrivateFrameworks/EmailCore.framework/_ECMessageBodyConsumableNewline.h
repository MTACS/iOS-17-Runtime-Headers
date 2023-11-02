
@interface _ECMessageBodyConsumableNewline : NSObject <ECMessageBodyConsumableInnerTextNode>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;

@end
