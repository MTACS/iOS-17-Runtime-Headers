
@interface ICASWindowSceneData : NSObject <AADataEventType> {
    NSString * _windowSceneID;
}

@property (nonatomic, readonly) NSString *windowSceneID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithWindowSceneID:(id)arg1;
- (id)toDict;
- (id)windowSceneID;

@end
