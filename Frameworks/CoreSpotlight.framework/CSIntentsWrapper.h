
@interface CSIntentsWrapper : NSObject

@property (nonatomic, readonly) Class INInteractionClass;

+ (id)sharedInstance;

- (Class)INInteractionClass;

@end
