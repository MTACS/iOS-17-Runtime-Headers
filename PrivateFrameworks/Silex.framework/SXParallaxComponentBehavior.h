
@interface SXParallaxComponentBehavior : SXComponentBehavior {
    int  _cachedDirection;
}

@property (nonatomic, readonly) int cachedDirection;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) double factor;

- (int)cachedDirection;
- (int)directionWithValue:(id)arg1 withType:(int)arg2;
- (Class)handlerClassForComponent:(id)arg1;

@end
