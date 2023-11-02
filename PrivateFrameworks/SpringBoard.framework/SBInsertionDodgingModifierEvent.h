
@interface SBInsertionDodgingModifierEvent : SBDodgingModifierEvent {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)type;

@end
