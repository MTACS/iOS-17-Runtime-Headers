
@protocol INImageServing <NSObject>

@required

- (NSString *)serviceIdentifier;
- (unsigned long long)servicePriority;

@end
