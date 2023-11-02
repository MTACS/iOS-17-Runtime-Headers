
@protocol OUPointCloud <NSObject, NSCopying>

@required

- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (unsigned long long)count;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)reset;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;

@end
