
@interface _SVXDeviceSetupFlowDisplayKeyFrameMutation : NSObject <SVXDeviceSetupFlowDisplayKeyFrameMutating> {
    SVXDeviceSetupFlowDisplayKeyFrame * _baseModel;
    double  _duration;
    long long  _keyFrameID;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasKeyFrameID : 1; 
        unsigned int hasText : 1; 
        unsigned int hasOffset : 1; 
        unsigned int hasDuration : 1; 
    }  _mutationFlags;
    double  _offset;
    NSString * _text;
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
- (void)setKeyFrameID:(long long)arg1;
- (void)setOffset:(double)arg1;
- (void)setText:(id)arg1;

@end
