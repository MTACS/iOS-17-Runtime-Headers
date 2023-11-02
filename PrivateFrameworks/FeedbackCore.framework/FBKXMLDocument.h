
@interface FBKXMLDocument : NSObject {
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } * _document;
}

- (void)dealloc;
- (id)initWithHTMLData:(id)arg1;
- (id)initWithHTMLString:(id)arg1;
- (id)initWithXMLData:(id)arg1;
- (id)initWithXMLString:(id)arg1;
- (id)performXPathQuery:(id)arg1;

@end
