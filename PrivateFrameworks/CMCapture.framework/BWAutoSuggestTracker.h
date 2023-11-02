
@interface BWAutoSuggestTracker : NSObject {
    NSMutableArray * _ObjectAreaIn;
    NSMutableArray * _centerDx;
    NSMutableArray * _centerDy;
    NSMutableArray * _centerVx;
    NSMutableArray * _centerVy;
    NSMutableArray * _centersIn;
    long long  _combinedTrackerID;
    unsigned int  _confidenceLevel;
    NSMutableArray * _objectAreaIn;
    int  _objectType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    int  _trackerID;
    int  _validObjectCounter;
}

@property (nonatomic, retain) NSMutableArray *centerDx;
@property (nonatomic, retain) NSMutableArray *centerDy;
@property (nonatomic, retain) NSMutableArray *centerVx;
@property (nonatomic, retain) NSMutableArray *centerVy;
@property (nonatomic, retain) NSMutableArray *centersIn;
@property (nonatomic) long long combinedTrackerID;
@property (nonatomic) unsigned int confidenceLevel;
@property (nonatomic, retain) NSMutableArray *objectAreaIn;
@property (nonatomic) int objectType;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic) int trackerID;
@property (nonatomic) int validObjectCounter;

- (id)centerDx;
- (id)centerDy;
- (id)centerVx;
- (id)centerVy;
- (id)centersIn;
- (long long)combinedTrackerID;
- (unsigned int)confidenceLevel;
- (void)dealloc;
- (id)init;
- (id)objectAreaIn;
- (int)objectType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setCenterDx:(id)arg1;
- (void)setCenterDy:(id)arg1;
- (void)setCenterVx:(id)arg1;
- (void)setCenterVy:(id)arg1;
- (void)setCentersIn:(id)arg1;
- (void)setCombinedTrackerID:(long long)arg1;
- (void)setConfidenceLevel:(unsigned int)arg1;
- (void)setObjectAreaIn:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackerID:(int)arg1;
- (void)setValidObjectCounter:(int)arg1;
- (int)trackerID;
- (int)validObjectCounter;

@end
