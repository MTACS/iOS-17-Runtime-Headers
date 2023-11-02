
@interface SFMagicHead : UIView {
    long long  _cellState;
    SFCircleProgressView * _circleProgressView;
    double  _containerRadius;
    UIView * _contentView;
    double  _degreeOffset;
    NSObject<SFMagicHeadDelegate> * _delegate;
    UIView * _imageSlotView;
    SFPersonImageView * _imageView;
    bool  _isMagicHead;
    SFAirDropNode * _node;
    NSUUID * _nodeIdentifier;
    bool  _pointedAt;
    long long  _position;
    NSProgress * _progress;
    NSArray * _progressKeyPaths;
    SFMagicHeadSettings * _settings;
    SFMagicHeadShadowView * _shadowView;
    long long  _size;
    UIAirDropNode * _slotNode;
    bool  _stateBeingRestored;
}

@property (readonly) double degreeOffset;
@property NSObject<SFMagicHeadDelegate> *delegate;
@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) UIView *imageSlotView;
@property (readonly) SFAirDropNode *node;
@property (nonatomic, readonly) NSUUID *nodeIdentifier;
@property bool pointedAt;
@property (nonatomic) long long position;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) SFMagicHeadSettings *settings;
@property (nonatomic) long long size;
@property (readonly) UIAirDropNode *slotNode;
@property bool stateBeingRestored;

- (void).cxx_destruct;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)dealloc;
- (double)degreeOffset;
- (id)delegate;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (bool)highlighted;
- (id)imageSlotView;
- (id)initWithNode:(id)arg1 slotNode:(id)arg2 containerRadius:(double)arg3 delegate:(id)arg4 settings:(id)arg5;
- (id)node;
- (id)nodeIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)pointedAt;
- (long long)position;
- (id)progress;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)resetTransferState;
- (void)setCellState:(long long)arg1 animated:(bool)arg2 silent:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPointedAt:(bool)arg1;
- (void)setPosition:(long long)arg1;
- (void)setPosition:(long long)arg1 withOffset:(double)arg2;
- (void)setPositionDegreeOffsetWithOffset:(double)arg1;
- (void)setProgress:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setStateBeingRestored:(bool)arg1;
- (id)settings;
- (long long)size;
- (id)slotNode;
- (bool)stateBeingRestored;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)userDidCancel;
- (void)userDidSelect;

@end
