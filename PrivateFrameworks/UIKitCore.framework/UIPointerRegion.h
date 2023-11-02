
@interface UIPointerRegion : NSObject <NSCopying, _UIContentEffectKey> {
    unsigned long long  _generationID;
    <NSObject> * _identifier;
    unsigned long long  _latchingAxes;
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
    UIView * _referenceView;
}

@property (nonatomic, readonly) bool _isLatching;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long generationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSObject> *identifier;
@property (nonatomic) unsigned long long latchingAxes;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic) UIView *referenceView;
@property (readonly) Class superclass;

+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (bool)_isLatching;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)generationID;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)latchingAxes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (id)referenceView;
- (void)setGenerationID:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatchingAxes:(unsigned long long)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setReferenceView:(id)arg1;

@end
