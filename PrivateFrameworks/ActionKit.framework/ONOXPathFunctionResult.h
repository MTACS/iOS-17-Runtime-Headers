
@interface ONOXPathFunctionResult : NSObject {
    struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; } * _xmlXPath;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly) double numericValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic) struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*xmlXPath;

- (bool)boolValue;
- (void)dealloc;
- (id)numberValue;
- (double)numericValue;
- (void)setXmlXPath:(struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)arg1;
- (id)stringValue;
- (struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)xmlXPath;

@end
