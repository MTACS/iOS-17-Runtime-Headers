
@interface TSDSVGToBezierPathConverter : NSObject <NSXMLParserDelegate> {
    TSDBezierPath * mFileBezierPath;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mGroupedAffineTransform;
    unsigned long long  mGroupedAffineTransformNestedCount;
    NSString * mHiddenOnTag;
    unsigned long long  mHiddenOnTagNestedCount;
    bool  mUsesEvenOdd;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mViewBox;
    bool  mViewBoxFound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGPath { }*)newPathFromSVGPathString:(id)arg1;
+ (struct CGPath { }*)newPathFromSVGPathString:(id)arg1 shouldClosePathAtEnd:(bool)arg2;
+ (struct CGPath { }*)newPathFromSVGPolygonString:(id)arg1;
+ (struct CGPath { }*)newPathFromSVGPolylineString:(id)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromSVGTransformAttributeString:(id)arg1;

- (void).cxx_destruct;
- (id)bezierPathFromSVGData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end
