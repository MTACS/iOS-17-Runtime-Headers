
@interface EQKitEnvironment : NSObject

@property (nonatomic, readonly) bool fontsLoaded;

+ (id)dataForEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;

- (bool)fontsLoaded;

@end
