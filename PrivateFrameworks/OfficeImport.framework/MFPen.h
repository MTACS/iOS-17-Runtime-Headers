
@interface MFPen : NSObject <MFObject> {
    OITSUColor * m_colour;
    int  m_penStyle;
    int  m_penWidth;
    double * m_userStyleArray;
}

+ (id)pen;
+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4;

- (void).cxx_destruct;
- (id)getColor;
- (int)getStyle;
- (int)getWidth;
- (id)init;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4;
- (int)selectInto:(id)arg1;

@end
