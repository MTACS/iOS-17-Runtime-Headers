
@protocol ARTechniqueForwardingStrategy <NSObject>

@required

- (bool)shouldProcessData:(id <ARData>)arg1;
- (bool)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id <ARResultDataContext>)arg2;

@end
