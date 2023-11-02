
@interface BMDiscoverabilitySignalStream : NSObject <BMSourceStream>

@property (nonatomic, readonly) NSString *identifier;

- (id)identifier;
- (id)source;

@end
