
@interface ARRaycastResult : NSObject {
    ARAnchor * _anchor;
    NSUUID * _anchorIdentifier;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _localTransform;
    long long  _target;
    long long  _targetAlignment;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldTransform;
}

@property (nonatomic, retain) ARAnchor *anchor;
@property (nonatomic, retain) NSUUID *anchorIdentifier;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } localTransform;
@property (nonatomic) long long target;
@property (nonatomic, readonly) long long targetAlignment;
@property (nonatomic, readonly) void worldPosition;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTransform;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)anchor;
- (id)anchorIdentifier;
- (id)description;
- (id)initWithWorldTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 target:(long long)arg2 targetAlignment:(long long)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransform;
- (void)setAnchor:(id)arg1;
- (void)setAnchorIdentifier:(id)arg1;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTarget:(long long)arg1;
- (long long)target;
- (long long)targetAlignment;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransform;

// Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer

- (void)worldPosition;

@end
