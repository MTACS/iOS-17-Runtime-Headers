
@interface KnowledgeGraphKit.MAWrapperLearningStreamResult : NSObject {
    void confidence;
    void detectedClass;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *detectedClass;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (id)detectedClass;
- (id)init;

@end
