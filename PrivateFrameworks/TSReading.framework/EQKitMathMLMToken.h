
@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitFontStyling, EQKitLayoutSchemataToken, EQKitMathMLNode> {
    union { 
        unsigned int mChar; 
        NSString *mString; 
        id mContent; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*EQKitMathMLTokenContent; 
    }  mContent;
    struct { 
        unsigned int mType : 2; 
    }  mFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)fontStyling;
- (id)init;
- (id)initFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parser:(id)arg2;
- (id)initWithContent:(id)arg1;
- (id)initWithString:(id)arg1 environment:(id)arg2;
- (bool)isNumber;
- (const void*)mathMLAttributes;
- (id)schemataFontStyling;
- (id)schemataTokenString;
- (unsigned int)schemataUnicharOrNul;
- (int)scriptContext;
- (int)scriptVariant;

@end
