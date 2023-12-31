
@interface PDFAKAnnotationSerializationHelper : NSObject

+ (bool)_annotationClassHasSeniority:(id)arg1;
+ (bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(struct CGPDFDictionary { }*)arg2;
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary { }*)arg2;
+ (id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1 andDictionary:(struct CGPDFDictionary { }*)arg2;

@end
