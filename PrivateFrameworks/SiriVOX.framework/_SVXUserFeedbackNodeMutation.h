
@interface _SVXUserFeedbackNodeMutation : NSObject <SVXUserFeedbackNodeMutating> {
    SVXUserFeedbackNode * _baseModel;
    NSSet * _dependentNodes;
    double  _duration;
    SVXUserFeedback * _feedback;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasDuration : 1; 
        unsigned int hasFeedback : 1; 
        unsigned int hasDependentNodes : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setDependentNodes:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFeedback:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
