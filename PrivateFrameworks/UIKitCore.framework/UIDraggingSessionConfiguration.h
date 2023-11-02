
@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding> {
    bool  _avoidsKeyboardSuppression;
    NSXPCListenerEndpoint * _axEndpoint;
    unsigned int  _coordinateSpaceSourceContextID;
    unsigned long long  _coordinateSpaceSourceLayerRenderID;
    NSXPCListenerEndpoint * _dataProviderEndpoint;
    NSString * _displayIdentifier;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _initialCentroid;
    bool  _initiatedWithPointer;
    PBItemCollection * _itemCollection;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumResizableSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumResizableSize;
    double  _originalRotation;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalScale;
    NSString * _persistentSceneIdentifier;
    NSIndexSet * _preferredPreviewIndexes;
    bool  _resizable;
    bool  _rotatable;
    UIDraggingSystemTouchRoutingPolicy * _routingPolicy;
    NSString * _sceneIdentifier;
    bool  _supportsSystemDrag;
    NSArray * _touchIDs;
    bool  _wantsElasticEffects;
}

@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } _initialCentroid;
@property (nonatomic) bool avoidsKeyboardSuppression;
@property (nonatomic, retain) NSXPCListenerEndpoint *axEndpoint;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic, retain) NSXPCListenerEndpoint *dataProviderEndpoint;
@property (nonatomic, retain) NSString *displayIdentifier;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialCentroid;
@property (nonatomic) bool initiatedWithPointer;
@property (nonatomic, retain) PBItemCollection *itemCollection;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumResizableSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumResizableSize;
@property (nonatomic) double originalRotation;
@property (nonatomic) struct CGSize { double x1; double x2; } originalScale;
@property (nonatomic, retain) NSString *persistentSceneIdentifier;
@property (nonatomic, retain) NSIndexSet *preferredPreviewIndexes;
@property (nonatomic) bool resizable;
@property (nonatomic) bool rotatable;
@property (nonatomic, retain) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (nonatomic, retain) NSString *sceneIdentifier;
@property (nonatomic) bool supportsSystemDrag;
@property (nonatomic, retain) NSArray *touchIDs;
@property (nonatomic) bool wantsElasticEffects;

+ (id)configurationWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 initialCentroidInSourceWindow:(struct CAPoint3D { double x1; double x2; double x3; })arg3 sourceView:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CAPoint3D { double x1; double x2; double x3; })_initialCentroid;
- (bool)avoidsKeyboardSuppression;
- (id)axEndpoint;
- (unsigned int)coordinateSpaceSourceContextID;
- (unsigned long long)coordinateSpaceSourceLayerRenderID;
- (id)dataProviderEndpoint;
- (id)displayIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialCentroid;
- (bool)initiatedWithPointer;
- (id)itemCollection;
- (struct CGSize { double x1; double x2; })maximumResizableSize;
- (struct CGSize { double x1; double x2; })minimumResizableSize;
- (double)originalRotation;
- (struct CGSize { double x1; double x2; })originalScale;
- (id)persistentSceneIdentifier;
- (id)preferredPreviewIndexes;
- (bool)resizable;
- (bool)rotatable;
- (id)routingPolicy;
- (id)sceneIdentifier;
- (void)setAvoidsKeyboardSuppression:(bool)arg1;
- (void)setAxEndpoint:(id)arg1;
- (void)setCoordinateSpaceSourceContextID:(unsigned int)arg1;
- (void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1;
- (void)setDataProviderEndpoint:(id)arg1;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setInitialCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitiatedWithPointer:(bool)arg1;
- (void)setItemCollection:(id)arg1;
- (void)setMaximumResizableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumResizableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOriginalRotation:(double)arg1;
- (void)setOriginalScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setPersistentSceneIdentifier:(id)arg1;
- (void)setPreferredPreviewIndexes:(id)arg1;
- (void)setResizable:(bool)arg1;
- (void)setRotatable:(bool)arg1;
- (void)setRoutingPolicy:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSupportsSystemDrag:(bool)arg1;
- (void)setTouchIDs:(id)arg1;
- (void)setWantsElasticEffects:(bool)arg1;
- (void)set_initialCentroid:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (bool)supportsSystemDrag;
- (id)touchIDs;
- (bool)wantsElasticEffects;

@end
