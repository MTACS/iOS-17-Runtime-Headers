
@interface _UIOServerActionOriginContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned int  _contextId;
    NSString * _displayIdentifier;
    unsigned long long  _layerId;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layerReferencePoint;
    NSString * _sceneIdentity;
}

@property (nonatomic, readonly) unsigned int contextId;
@property (nonatomic, readonly, copy) NSString *displayIdentifier;
@property (nonatomic, readonly) unsigned long long layerId;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } layerReferencePoint;
@property (nonatomic, readonly, copy) NSString *sceneIdentity;

+ (id)defaultOriginContext;
+ (id)originContextForView:(id)arg1 referencePoint:(struct CGPoint { double x1; double x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureWithWindow:(id)arg1;
- (unsigned int)contextId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)layerId;
- (struct CGPoint { double x1; double x2; })layerReferencePoint;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sceneIdentity;
- (struct CGPoint { double x1; double x2; })translatedReferencePointForDestinationView:(id)arg1;

@end
