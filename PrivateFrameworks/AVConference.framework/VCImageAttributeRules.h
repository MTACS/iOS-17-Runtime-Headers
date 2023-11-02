
@interface VCImageAttributeRules : NSObject {
    NSMutableDictionary * _imageAttributeRules;
}

@property (nonatomic, retain) NSMutableDictionary *imageAttributeRules;

- (void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7;
- (void)dealloc;
- (id)description;
- (id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2;
- (id)imageAttributeRules;
- (id)init;
- (void)interfaceKey:(id*)arg1 forInterface:(int)arg2 directionKey:(id*)arg3 forDirection:(int)arg4;
- (void)setImageAttributeRules:(id)arg1;
- (void)swapSendAndReceiveRules;

@end