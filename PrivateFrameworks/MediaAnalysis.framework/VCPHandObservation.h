
@interface VCPHandObservation : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    int  _chirality;
    unsigned long long  _fingerOpenness;
    float  _gestureConfidence;
    int  _gestureType;
    int  _groupID;
    int  _handID;
    NSArray * _keypoints;
    unsigned long long  _mitigationType;
    int  _revision;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) int chirality;
@property (nonatomic) unsigned long long fingerOpenness;
@property (nonatomic) float gestureConfidence;
@property (nonatomic) int gestureType;
@property (nonatomic) int groupID;
@property (nonatomic) int handID;
@property (nonatomic, retain) NSArray *keypoints;
@property (nonatomic) unsigned long long mitigationType;
@property (nonatomic) int revision;

+ (id)twoHandGestureTypes;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (int)chirality;
- (unsigned long long)fingerOpenness;
- (float)gestureConfidence;
- (int)gestureType;
- (int)groupID;
- (int)handID;
- (id)init;
- (id)keypoints;
- (unsigned long long)mitigationType;
- (int)revision;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChirality:(int)arg1;
- (void)setFingerOpenness:(unsigned long long)arg1;
- (void)setGestureConfidence:(float)arg1;
- (void)setGestureType:(int)arg1;
- (void)setGroupID:(int)arg1;
- (void)setHandID:(int)arg1;
- (void)setKeypoints:(id)arg1;
- (void)setMitigationType:(unsigned long long)arg1;
- (void)setRevision:(int)arg1;

@end
