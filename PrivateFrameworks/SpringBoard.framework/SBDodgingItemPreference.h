
@interface SBDodgingItemPreference : NSObject {
    bool  _canBePositionedOutsideContainerBounds;
    unsigned long long  _dodgingAxisMask;
    NSSet * _excludedDodgingIdentifiers;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preferredCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    bool  _updateInteractively;
}

@property (nonatomic, readonly) bool canBePositionedOutsideContainerBounds;
@property (nonatomic, readonly) unsigned long long dodgingAxisMask;
@property (nonatomic, readonly) NSSet *excludedDodgingIdentifiers;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumSize;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } preferredCenter;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (getter=isUpdatingInteractively, nonatomic, readonly) bool updateInteractively;

- (void).cxx_destruct;
- (bool)canBePositionedOutsideContainerBounds;
- (unsigned long long)dodgingAxisMask;
- (id)excludedDodgingIdentifiers;
- (id)initWithPreferredSize:(struct CGSize { double x1; double x2; })arg1 preferredCenter:(struct CGPoint { double x1; double x2; })arg2 updateInteractively:(bool)arg3 dodgingAxisMask:(unsigned long long)arg4 minimumSize:(struct CGSize { double x1; double x2; })arg5 canBePositionedOutsideContainerBounds:(bool)arg6 excludedDodgingIdentifiers:(id)arg7;
- (bool)isUpdatingInteractively;
- (struct CGSize { double x1; double x2; })minimumSize;
- (struct CGPoint { double x1; double x2; })preferredCenter;
- (struct CGSize { double x1; double x2; })preferredSize;

@end
