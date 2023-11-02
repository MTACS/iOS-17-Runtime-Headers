
@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {
    FBSSceneMessage * _message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FBSSceneMessage *message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;

@end
