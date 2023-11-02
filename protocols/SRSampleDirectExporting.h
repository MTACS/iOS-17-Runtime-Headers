
@protocol SRSampleDirectExporting

@required

- (bool)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(NSOutputStream *)arg1;

@end
