
@interface PXCTFramesetter : NSObject {
    NSAttributedString * _attributedString;
    struct CGContext { } * _context;
    struct __CTFramesetter { } * _framesetter;
    bool  _prepared;
    NSShadow * _shadow;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct CGContext { }*context;
@property (nonatomic, readonly) struct __CTFramesetter { }*framesetter;
@property (nonatomic, readonly) NSShadow *shadow;

- (void).cxx_destruct;
- (id)attributedString;
- (struct CGContext { }*)context;
- (void)dealloc;
- (id)frameWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(bool)arg3;
- (struct __CTFramesetter { }*)framesetter;
- (id)init;
- (id)initWithAttributedString:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)prepare;
- (id)shadow;

@end
