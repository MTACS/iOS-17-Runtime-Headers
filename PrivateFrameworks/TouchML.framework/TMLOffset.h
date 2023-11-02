
@interface TMLOffset : NSObject <NSCopying, TMLOffsetJSExports> {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _offset;
}

@property (nonatomic, readonly) double horizontal;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } offset;
@property (nonatomic, readonly) double vertical;

+ (void)initializeJSContext:(id)arg1;

- (id)UIOffsetValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)horizontal;
- (id)initWithOffset:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })offset;
- (double)vertical;

@end
