
@interface PXPhotosDetailsFloatingCardLayout : NSObject <PXFloatingCardLayout> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __containerBounds;
    NSDictionary * _heightsForIdentifier;
    NSDictionary * _identifiersForHeight;
    NSOrderedSet * _snappableHeights;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _containerBounds;
@property (nonatomic, readonly) bool canDrag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *heightsForIdentifier;
@property (nonatomic, readonly) NSDictionary *identifiersForHeight;
@property (nonatomic, readonly) double initialHeight;
@property (nonatomic, readonly) unsigned long long initialPosition;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, readonly) NSOrderedSet *snappableHeights;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double width;

- (void).cxx_destruct;
- (void)_configureForPhotosDetailsViewController:(id)arg1 composition:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_containerBounds;
- (bool)canDrag;
- (void)didUpdateCardHeight:(double)arg1;
- (void)didUpdateCardPosition:(unsigned long long)arg1;
- (id)heightsForIdentifier;
- (id)identifiersForHeight;
- (id)initWithPhotosDetailsUIViewController:(id)arg1 widgetComposition:(id)arg2;
- (double)initialHeight;
- (unsigned long long)initialPosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (id)snappableHeights;
- (double)width;

@end
