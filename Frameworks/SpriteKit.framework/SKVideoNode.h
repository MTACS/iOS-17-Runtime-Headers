
@interface SKVideoNode : SKNode {
    bool  _isUsingKVO;
    AVPlayer * _player;
    void * _skcVideoNode;
    NSString * _videoFileName;
    NSURL * _videoFileURL;
}

@property (nonatomic, retain) AVPlayer *_player;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (bool)supportsSecureCoding;
+ (id)videoNodeWithAVPlayer:(id)arg1;
+ (id)videoNodeWithFileNamed:(id)arg1;
+ (id)videoNodeWithURL:(id)arg1;
+ (id)videoNodeWithVideoFileNamed:(id)arg1;
+ (id)videoNodeWithVideoURL:(id)arg1;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (id)_player;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)commonInit;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAVPlayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithVideoFileNamed:(id)arg1;
- (id)initWithVideoURL:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_player:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
