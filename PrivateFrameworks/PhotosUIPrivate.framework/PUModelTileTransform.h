
@interface PUModelTileTransform : NSObject <NSCopying> {
    bool  _hasUserInput;
    bool  _isZoomedOut;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overscroll;
    double  _scale;
    NSString * _userInputOriginIdentifier;
}

@property (nonatomic, readonly) bool hasUserInput;
@property (nonatomic, readonly) bool hasUserZoomedIn;
@property (nonatomic, readonly) bool hasUserZoomedOut;
@property (nonatomic, readonly) bool isZoomedOut;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } normalizedTranslation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } overscroll;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly, copy) NSString *userInputOriginIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasUserInput;
- (bool)hasUserZoomedIn;
- (bool)hasUserZoomedOut;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNoUserInput;
- (id)initWithNormalizedTranslation:(struct CGPoint { double x1; double x2; })arg1 overscroll:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 userInputOriginIdentifier:(id)arg4 isZoomedOut:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isZoomedOut;
- (struct CGPoint { double x1; double x2; })normalizedTranslation;
- (struct CGPoint { double x1; double x2; })overscroll;
- (double)scale;
- (id)userInputOriginIdentifier;

@end
