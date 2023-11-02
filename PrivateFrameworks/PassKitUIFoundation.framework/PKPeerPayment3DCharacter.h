
@interface PKPeerPayment3DCharacter : NSObject {
    NSString * _character;
    SCNNode * _node;
}

@property (nonatomic, retain) NSString *character;
@property (nonatomic, retain) SCNNode *node;

+ (id)characterWithCharacter:(id)arg1 node:(id)arg2;

- (void).cxx_destruct;
- (id)character;
- (id)node;
- (void)setCharacter:(id)arg1;
- (void)setNode:(id)arg1;

@end
