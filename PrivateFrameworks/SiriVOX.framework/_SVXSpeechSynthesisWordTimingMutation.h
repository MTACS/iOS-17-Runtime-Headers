
@interface _SVXSpeechSynthesisWordTimingMutation : NSObject <SVXSpeechSynthesisWordTimingMutating> {
    SVXSpeechSynthesisWordTiming * _baseModel;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasRange : 1; 
        unsigned int hasTimeInterval : 1; 
    }  _mutationFlags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    double  _timeInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimeInterval:(double)arg1;

@end
