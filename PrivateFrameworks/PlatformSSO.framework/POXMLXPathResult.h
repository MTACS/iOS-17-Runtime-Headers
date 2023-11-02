
@interface POXMLXPathResult : NSObject {
    POXMLXPathContext * _xpathContext;
    struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; } * _xpathObj;
}

@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic, retain) POXMLXPathContext *xpathContext;
@property (nonatomic) struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*xpathObj;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (int)nodeCount;
- (id)nodes;
- (void)setXpathContext:(id)arg1;
- (void)setXpathObj:(struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)arg1;
- (id)xpathContext;
- (struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)xpathObj;

@end
