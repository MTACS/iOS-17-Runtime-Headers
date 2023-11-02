
@interface _SFSpeechRecognizerModelOptions : NSObject <NSCopying, NSSecureCoding> {
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

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)farField;
- (id)initWithCoder:(id)arg1;
- (id)initWithFarField:(bool)arg1 supplementalModelURL:(id)arg2 modelOverrideURL:(id)arg3 speechProfileURLs:(id)arg4 taskForMemoryLock:(id)arg5;
- (id)modelOverrideURL;
- (id)speechProfileURLs;
- (id)supplementalModelURL;
- (id)taskForMemoryLock;

@end
