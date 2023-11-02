
@interface ICASWindowSceneResizeData : NSObject <AADataEventType> {
    NSNumber * _usesMultiWindow;
}

@property (nonatomic, readonly) NSNumber *usesMultiWindow;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithUsesMultiWindow:(id)arg1;
- (id)toDict;
- (id)usesMultiWindow;

@end
