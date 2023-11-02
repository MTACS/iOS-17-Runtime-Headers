
@protocol RSKeyframe <NSObject, NSCopying>

@required

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraPose;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (long long)count;
- (NSUUID *)identifier;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)pointsToWorld;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;
- (double)timestamp;

@end
