
@protocol PUMutableActivityItemSource <NSObject>

@required

- (void)setSharingPreferences:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; })arg1;
- (void)setState:(unsigned long long)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; })sharingPreferences;
- (unsigned long long)state;

@end
