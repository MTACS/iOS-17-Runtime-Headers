
@interface MCTypeInput : MCKeyboardInput {
    NSString * _characters;
    NSArray * _nearbyKeys;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (nonatomic, readonly, copy) NSString *characters;
@property (nonatomic, readonly, copy) NSArray *nearbyKeys;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;

- (void).cxx_destruct;
- (bool)canComposeNew:(id)arg1;
- (id)characters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2;
- (id)initWithCharacters:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 nearbyKeys:(id)arg3 sourceKeyboardState:(id)arg4;
- (id)nearbyKeys;
- (struct CGPoint { double x1; double x2; })point;
- (id)shortDescriptionWithLeadingString:(id)arg1;

@end
