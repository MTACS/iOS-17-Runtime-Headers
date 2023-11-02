
@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    NSMutableArray * _associatedLayoutAttributes;
    double  _associatedVerticalShift;
    CKChatItem * _chatItem;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _contentTransform3D;
    double  _currentBalloonOffsetX;
    double  _currentCenterY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentFrame;
    double  _easing;
    double  _factor;
    double  _height;
    bool  _hidden;
    double  _initialBalloonOffsetX;
    CKTranscriptCollectionViewLayoutAttributes * _initialParentLayoutAttributes;
    bool  _insertingReply;
    BOOL  _orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _parentChatItemSize;
    double  _parentRotationOffset;
    double  _targetCenterY;
    double  _targetEasing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    NSArray * _threadGroupLayoutAttributes;
}

@property (nonatomic, retain) CKChatItem *chatItem;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } contentTransform3D;
@property (getter=isInsertingReply, nonatomic) bool insertingReply;
@property (nonatomic) struct CGSize { double x1; double x2; } parentChatItemSize;
@property (nonatomic) double parentRotationOffset;

- (void).cxx_destruct;
- (id)chatItem;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })contentTransform3D;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithLayoutAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInsertingReply;
- (struct CGSize { double x1; double x2; })parentChatItemSize;
- (double)parentRotationOffset;
- (void)setAlphaOrFilterLevel:(double)arg1;
- (void)setChatItem:(id)arg1;
- (void)setInsertingReply:(bool)arg1;
- (void)setParentChatItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParentRotationOffset:(double)arg1;

@end
