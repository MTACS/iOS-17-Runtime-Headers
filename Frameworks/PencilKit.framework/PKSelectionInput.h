
@interface PKSelectionInput : NSObject {
    long long  _inputType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    long long  _selectionType;
}

@property (nonatomic) long long inputType;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) long long selectionType;

+ (id)inputWithType:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 inputType:(long long)arg3;

- (long long)inputType;
- (struct CGPoint { double x1; double x2; })location;
- (long long)selectionType;
- (void)setInputType:(long long)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionType:(long long)arg1;

@end
