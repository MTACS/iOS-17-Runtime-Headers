
@interface XMLWrapperNamespace : NSObject {
    NSString * _href;
    NSString * _prefix;
    struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; } * _xmlNs;
}

@property (nonatomic, retain) NSString *href;
@property (nonatomic, retain) NSString *prefix;

- (void).cxx_destruct;
- (id)href;
- (id)initWithNsNode:(struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)arg1 error:(id*)arg2;
- (id)prefix;
- (void)setHref:(id)arg1;
- (void)setPrefix:(id)arg1;
- (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)xmlNsForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 error:(id*)arg2;

@end
