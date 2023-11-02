
@interface _SVXButtonEventMutation : NSObject <SVXButtonEventMutating> {
    SVXButtonEvent * _baseModel;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasType : 1; 
        unsigned int hasTimestamp : 1; 
    }  _mutationFlags;
    unsigned long long  _timestamp;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(long long)arg1;

@end
