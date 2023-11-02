
@interface IPProductionAccessAdjudicator : NSObject <IPAccessAdjudicator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)progressServer:(id)arg1 shouldAcceptConnection:(id)arg2;

@end