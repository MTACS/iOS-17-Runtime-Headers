
@protocol HDSPActivity <NSObject>

@required

- (bool)deferIfNecessary;
- (NSString *)name;
- (unsigned long long)options;

@end
