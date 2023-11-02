
@interface PTHandGesture : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSNumber * _confidence;
    unsigned int  _fpMitigation;
    unsigned int  _handChirality;
    NSNumber * _handID;
    NSArray * _handKeypoints;
    NSNumber * _personID;
    unsigned int  _type;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) NSNumber *confidence;
@property (readonly) unsigned int fpMitigation;
@property (readonly) unsigned int handChirality;
@property (readonly) NSNumber *handID;
@property (nonatomic, readonly) NSArray *handKeypoints;
@property (readonly) NSNumber *personID;
@property (readonly) unsigned int type;

+ (id)gestureTypeToString:(unsigned int)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)confidence;
- (unsigned int)fpMitigation;
- (unsigned int)handChirality;
- (id)handID;
- (id)handKeypoints;
- (id)initWithType:(unsigned int)arg1 chirality:(unsigned int)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 confidence:(id)arg4 personID:(id)arg5 handID:(id)arg6;
- (id)initWithVCPHandObservation:(id)arg1;
- (id)personID;
- (unsigned int)type;

@end
