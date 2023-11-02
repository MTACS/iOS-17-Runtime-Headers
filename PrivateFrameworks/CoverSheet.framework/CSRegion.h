
@interface CSRegion : NSObject <NSCopying, UICoordinateSpace> {
    <UICoordinateSpace> * _coordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _extent;
    bool  _hidden;
    NSString * _identifier;
    <UICoordinateSpace> * _identity;
    id  _provider;
    bool  _reservedForHorizontalScrolling;
    long long  _role;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extent;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) <UICoordinateSpace> *identity;
@property (nonatomic) id provider;
@property (getter=isReservedForHorizontalScrolling, nonatomic) bool reservedForHorizontalScrolling;
@property (nonatomic) long long role;
@property (readonly) Class superclass;

+ (id)regionForCoordinateSpace:(id)arg1;
+ (id)regionForCoordinateSpace:(id)arg1 withExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (id)initWithCoordinateSpace:(id)arg1 withExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 role:(long long)arg3;
- (bool)intersectsCoordinateSpace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isReservedForHorizontalScrolling;
- (id)provider;
- (id)regionForCoordinateSpace:(id)arg1;
- (long long)role;
- (id)role:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setReservedForHorizontalScrolling:(bool)arg1;
- (void)setRole:(long long)arg1;

@end
