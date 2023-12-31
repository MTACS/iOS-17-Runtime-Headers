
@interface TSDDefaultHint : NSObject <NSSecureCoding, TSDHint> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    unsigned long long  mEdges;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;
+ (bool)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyForArchiving;
- (unsigned long long)edges;
- (void)encodeWithCoder:(id)arg1;
- (id)firstChildHint;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 edges:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isLastPartitionHorizontally:(bool)arg1;
- (id)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (bool)overlapsWithSelection:(id)arg1;

@end
