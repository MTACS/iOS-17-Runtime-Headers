
@interface PXStoryRelatedResult : NSObject {
    NSString * _debugInfo;
    NSArray * _storyConfigurations;
}

@property (nonatomic, readonly) NSString *debugInfo;
@property (nonatomic, readonly) NSArray *storyConfigurations;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)initWithStoryConfigurations:(id)arg1 debugInfo:(id)arg2;
- (id)storyConfigurations;

@end
