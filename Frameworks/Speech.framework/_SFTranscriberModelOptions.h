
@interface _SFTranscriberModelOptions : NSObject <NSCopying> {
    bool  _farField;
    NSURL * _modelOverrideURL;
    NSArray * _speechProfileURLs;
    NSURL * _supplementalModelURL;
    NSString * _taskForMemoryLock;
}

@property (nonatomic, readonly) bool farField;
@property (nonatomic, readonly, copy) NSURL *modelOverrideURL;
@property (nonatomic, readonly, copy) NSArray *speechProfileURLs;
@property (nonatomic, readonly, copy) NSURL *supplementalModelURL;
@property (nonatomic, readonly, copy) NSString *taskForMemoryLock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)farField;
- (id)initWithSupplementalModelURL:(id)arg1 farField:(bool)arg2 modelOverrideURL:(id)arg3 speechProfileURLs:(id)arg4 taskForMemoryLock:(id)arg5;
- (id)initWithSupplementalModelURL:(id)arg1 farField:(bool)arg2 modelOverrideURL:(id)arg3 taskForMemoryLock:(id)arg4;
- (id)modelOverrideURL;
- (id)speechProfileURLs;
- (id)supplementalModelURL;
- (id)taskForMemoryLock;

@end
