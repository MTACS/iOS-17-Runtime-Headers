
@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating> {
    AFCallSiteInfo * _base;
    NSString * _imagePath;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasImagePath : 1; 
        unsigned int hasSymbolName : 1; 
    }  _mutationFlags;
    NSString * _symbolName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getImagePath;
- (id)getSymbolName;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setImagePath:(id)arg1;
- (void)setSymbolName:(id)arg1;

@end
