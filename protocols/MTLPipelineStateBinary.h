
@protocol MTLPipelineStateBinary

@required

- (NSData *)binary;
- (unsigned long long)uniqueIdentifier;

@optional

- (unsigned long long)debugIdentifier;

@end
