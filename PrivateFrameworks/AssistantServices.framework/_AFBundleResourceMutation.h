
@interface _AFBundleResourceMutation : NSObject <AFBundleResourceMutating> {
    AFBundleResource * _base;
    NSString * _extension;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasName : 1; 
        unsigned int hasExtension : 1; 
    }  _mutationFlags;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getExtension;
- (id)getName;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setExtension:(id)arg1;
- (void)setName:(id)arg1;

@end
