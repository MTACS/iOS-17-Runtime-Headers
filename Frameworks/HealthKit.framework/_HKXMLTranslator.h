
@interface _HKXMLTranslator : NSObject {
    struct _xsltStylesheet { struct _xsltStylesheet {} *x1; struct _xsltStylesheet {} *x2; struct _xsltStylesheet {} *x3; struct _xsltDocument {} *x4; struct _xmlDoc {} *x5; struct _xmlHashTable {} *x6; int x7; struct _xmlHashTable {} *x8; struct _xsltStackElem {} *x9; struct _xsltTemplate {} *x10; struct _xmlHashTable {} *x11; struct _xsltCompMatch {} *x12; struct _xsltCompMatch {} *x13; struct _xsltCompMatch {} *x14; struct _xsltCompMatch {} *x15; struct _xsltCompMatch {} *x16; struct _xsltCompMatch {} *x17; struct _xsltCompMatch {} *x18; struct _xsltCompMatch {} *x19; struct _xmlHashTable {} *x20; struct _xmlHashTable {} *x21; struct _xmlHashTable {} *x22; void *x23; void *x24; char *x25; char *x26; char *x27; char *x28; int x29; struct _xsltDecimalFormat {} *x30; int x31; char *x32; char *x33; int x34; char *x35; struct _xsltElemPreComp {} *x36; int x37; int x38; char *x39; char **x40; int x41; int x42; void *x43; struct _xmlHashTable {} *x44; int x45; struct _xsltDocument {} *x46; struct _xmlDict {} *x47; void *x48; char *x49; int x50; } * _stylesheet;
}

- (id)_localizeXSL:(id)arg1 localizationTableName:(id)arg2 localizationOverride:(id)arg3;
- (id)convertToHTMLFromXML:(id)arg1;
- (void)dealloc;
- (id)initWithXSL:(id)arg1 localizationTableName:(id)arg2 localizationOverride:(id)arg3;

@end
