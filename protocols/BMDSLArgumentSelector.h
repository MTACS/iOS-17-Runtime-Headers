
@protocol BMDSLArgumentSelector <NSSecureCoding>

@required

- (NSArray *)argumentsFromInput:(id)arg1 combinedState:(id)arg2;

@end
