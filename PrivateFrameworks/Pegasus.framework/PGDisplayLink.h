
@interface PGDisplayLink : NSObject <BSInvalidatable> {
    bool  _invalidated;
    CADisplayLink * _link;
    id /* block */  _linkFired;
    id  _owner;
    unsigned long long  _preferredFramesPerSecond;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ linkFired;
@property (nonatomic, readonly) id owner;
@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_linkFired:(id)arg1;
- (id)initWithOwner:(id)arg1 linkFired:(id /* block */)arg2;
- (void)invalidate;
- (id /* block */)linkFired;
- (id)owner;
- (unsigned long long)preferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(unsigned long long)arg1;

@end
