
@protocol VCMediaDeviceProtocol <NSObject>

@required

- (NSError *)pause;
- (NSError *)resume;
- (NSError *)run;
- (NSError *)start;
- (NSError *)stop;

@end
