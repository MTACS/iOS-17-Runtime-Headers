
@interface VCPCoreMLFeatureProviderGestureVideo : NSObject <MLFeatureProvider> {
    int  _channels;
    int  _currentGroupID;
    bool  _lrFlip;
    NSMutableDictionary * _observationsPersons;
    bool  _ready;
    int  _rotationInDegrees;
    bool  _scaleUpSmallHandGroup;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property bool lrFlip;
@property int rotationInDegrees;
@property bool scaleUpSmallHandGroup;

- (void).cxx_destruct;
- (void)addLeftHand:(id)arg1 andRightHand:(id)arg2;
- (id)existingGroupIDs;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)init;
- (bool)lrFlip;
- (id)observationsForCurrentGroup;
- (bool)ready;
- (void)reset;
- (int)rotationInDegrees;
- (bool)scaleUpSmallHandGroup;
- (void)setCurrentGroupID:(int)arg1;
- (void)setLrFlip:(bool)arg1;
- (void)setRotationInDegrees:(int)arg1;
- (void)setScaleUpSmallHandGroup:(bool)arg1;

@end
