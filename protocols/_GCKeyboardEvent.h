
@protocol _GCKeyboardEvent <NSCopying, NSObject>

@required

- (long long)down;
- (unsigned long long)sender;
- (unsigned long long)timestamp;
- (long long)usage;
- (long long)usagePage;

@end
