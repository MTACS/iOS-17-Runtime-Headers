
@interface FigCaptureSemanticStyleSet : NSObject <FigXPCCoding, NSCopying> {
    NSArray * _regions;
    NSArray * _semanticStyles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *regions;
@property (nonatomic, readonly) NSArray *semanticStyles;
@property (readonly) Class superclass;

+ (id)semanticStyleSetWithSemanticStyles:(id)arg1 regions:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (float)largestEdgeOffset;
- (id)largestRegionSemanticStyle;
- (float)leftmostRegionStartXOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionAtIndex:(unsigned long long)arg1;
- (id)regions;
- (id)semanticStyles;

@end
