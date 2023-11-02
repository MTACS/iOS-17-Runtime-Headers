
@interface _SVXDeviceProblemsStateMutation : NSObject <SVXDeviceProblemsStateMutating> {
    SVXDeviceProblemsState * _baseModel;
    bool  _isFixingProblems;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIsFixingProblems : 1; 
        unsigned int hasProblems : 1; 
    }  _mutationFlags;
    unsigned long long  _problems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setIsFixingProblems:(bool)arg1;
- (void)setProblems:(unsigned long long)arg1;

@end
