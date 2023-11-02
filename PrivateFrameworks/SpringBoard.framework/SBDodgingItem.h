
@interface SBDodgingItem : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    <UICoordinateSpace> * _containerCoordinateSpace;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    <SBDodgingItemDelegate> * _delegate;
    SBDodgingResolverViewController * _dodgingResolverViewController;
    NSArray * _otherDodgingIdentifiers;
    SBDodgingItemPreference * _preference;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _uniqueIdentifier;
    UIView * _view;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, retain) <UICoordinateSpace> *containerCoordinateSpace;
@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic, readonly) <SBDodgingItemDelegate> *delegate;
@property (nonatomic, retain) NSArray *otherDodgingIdentifiers;
@property (nonatomic, retain) SBDodgingItemPreference *preference;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (id)containerCoordinateSpace;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUniqueIdentifier:(id)arg1 view:(id)arg2 delegate:(id)arg3 dodgingResolverViewController:(id)arg4;
- (id)invalidate;
- (bool)isEqual:(id)arg1;
- (id)otherDodgingIdentifiers;
- (id)preference;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContainerCoordinateSpace:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsUpdateAnimated:(bool)arg1;
- (void)setOtherDodgingIdentifiers:(id)arg1;
- (void)setPreference:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uniqueIdentifier;
- (id)view;

@end
