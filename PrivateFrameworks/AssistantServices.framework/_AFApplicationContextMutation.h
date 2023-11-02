
@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating> {
    AceObject * _aceContext;
    NSArray * _aceContexts;
    NSString * _associatedBundleIdentifier;
    AFApplicationContext * _base;
    AFBulletin * _bulletin;
    NSDictionary * _contextDictionary;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAssociatedBundleIdentifier : 1; 
        unsigned int hasBulletin : 1; 
        unsigned int hasAceContext : 1; 
        unsigned int hasContextDictionary : 1; 
        unsigned int hasAceContexts : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAceContext;
- (id)getAceContexts;
- (id)getAssociatedBundleIdentifier;
- (id)getBulletin;
- (id)getContextDictionary;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAceContext:(id)arg1;
- (void)setAceContexts:(id)arg1;
- (void)setAssociatedBundleIdentifier:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setContextDictionary:(id)arg1;

@end
