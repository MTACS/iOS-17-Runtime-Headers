
@interface PDFOutline : NSObject {
    PDFOutlinePrivate * _private;
}

@property (nonatomic, retain) PDFAction *action;
@property (nonatomic, retain) PDFDestination *destination;
@property (nonatomic, readonly) PDFDocument *document;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic) bool isOpen;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic, readonly) PDFOutline *parent;

- (void).cxx_destruct;
- (void)_addActionToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (bool)_addDestinationToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (id)_childArray;
- (bool)_childDictionaryReferencesParent:(struct CGPDFDictionary { }*)arg1;
- (id)_firstChild;
- (id)_lastChild;
- (void)_lazilyLoadChildren;
- (id)_next;
- (int)_openDescendantCount;
- (id)_previous;
- (void)_removeChildAtIndex:(unsigned long long)arg1;
- (void)_setParent:(id)arg1;
- (struct CGPDFDictionary { }*)_srcDictionaryRef;
- (id)action;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)commonInit;
- (struct __CFDictionary { }*)createDictionaryRef;
- (void)dealloc;
- (id)destination;
- (id)document;
- (unsigned long long)index;
- (id)init;
- (id)initWithDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 parent:(id)arg3;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateDictionaryRef;
- (bool)isOpen;
- (id)label;
- (unsigned long long)numberOfChildren;
- (id)parent;
- (void)removeFromParent;
- (void)setAction:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setIsOpen:(bool)arg1;
- (void)setLabel:(id)arg1;

@end
