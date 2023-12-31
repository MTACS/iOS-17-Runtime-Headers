
@interface PDFFormFieldPrivateVars : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    long long  buttonType;
    NSString * defaultStringValue;
    struct __CFDictionary { } * dictionary;
    PDFDocument * document;
    NSString * fieldName;
    int  fieldType;
    NSString * stringValue;
    bool  writeDefaultValue;
}

- (void).cxx_destruct;

@end
