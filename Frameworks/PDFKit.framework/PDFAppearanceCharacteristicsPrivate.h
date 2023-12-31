
@interface PDFAppearanceCharacteristicsPrivate : NSObject {
    UIColor * backgroundColor;
    UIColor * borderColor;
    NSString * caption;
    long long  controlType;
    NSString * downCaption;
    struct CGPDFForm { } * icon;
    NSString * rolloverCaption;
    long long  rotation;
    int  scaleCircumstance;
    bool  scaleProportional;
}

- (void).cxx_destruct;

@end
