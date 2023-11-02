
@interface PDFActionGoTo : PDFAction <NSCopying> {
    PDFActionGoToPrivateVars * _private2;
}

@property (nonatomic, retain) PDFDestination *destination;

- (void).cxx_destruct;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (id)description;
- (id)destination;
- (id)initWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)initWithDestination:(id)arg1;
- (void)setDestination:(id)arg1;
- (id)toolTip;
- (id)toolTipNoLabel;

@end
