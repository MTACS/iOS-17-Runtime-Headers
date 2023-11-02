
@interface PDFActionURL : PDFAction <NSCopying> {
    PDFActionURLPrivateVars * _private2;
}

@property (nonatomic, copy) NSURL *URL;
@property (getter=isSuspiciousURL, nonatomic, readonly) bool suspiciousURL;

- (void).cxx_destruct;
- (id)URL;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (id)description;
- (id)initWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)initWithURL:(id)arg1;
- (bool)isSuspiciousURL;
- (void)setURL:(id)arg1;
- (id)toolTip;

@end
