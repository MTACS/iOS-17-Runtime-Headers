
@interface _SVXUserFeedbackSceneMutation : NSObject <SVXUserFeedbackSceneMutating> {
    SVXUserFeedbackScene * _baseModel;
    double  _duration;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasDuration : 1; 
        unsigned int hasNodes : 1; 
    }  _mutationFlags;
    NSSet * _nodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNodes:(id)arg1;

@end
