
@protocol ACUISActivityUpdateProviding <NSObject>

@required

- (NSString *)activityIdentifier;
- (ACActivityDescriptor *)descriptor;
- (long long)state;

@end
