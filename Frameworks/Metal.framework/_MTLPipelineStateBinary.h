
@interface _MTLPipelineStateBinary : NSObject <MTLPipelineStateBinary> {
    NSData * _binary;
    unsigned long long  _debugIdentifier;
    unsigned long long  _uniqueIdentifier;
}

@property (readonly, retain) NSData *binary;
@property (readonly) unsigned long long debugIdentifier;
@property (readonly) unsigned long long uniqueIdentifier;

- (id)binary;
- (void)dealloc;
- (unsigned long long)debugIdentifier;
- (id)initWithBinary:(id)arg1 uniqueIdentifier:(unsigned long long)arg2;
- (id)initWithBinary:(id)arg1 uniqueIdentifier:(unsigned long long)arg2 debugIdentifier:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifier;

@end
