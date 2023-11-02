
@interface VCPHandObject : NSObject {
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
    float  _confidence;
    int  _groupID;
    int  _handID;
    int  _revision;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) int chirality;
@property (nonatomic) float confidence;
@property (nonatomic) int groupID;
@property (nonatomic) int handID;
@property (nonatomic) int revision;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (int)chirality;
- (float)confidence;
- (int)groupID;
- (int)handID;
- (int)revision;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChirality:(int)arg1;
- (void)setConfidence:(float)arg1;
- (void)setGroupID:(int)arg1;
- (void)setHandID:(int)arg1;
- (void)setRevision:(int)arg1;

@end
