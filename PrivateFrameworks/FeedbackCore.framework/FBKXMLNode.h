
@interface FBKXMLNode : NSObject {
    NSDictionary * _attributes;
    NSArray * _children;
    NSString * _content;
    NSString * _name;
}

@property (retain) NSDictionary *attributes;
@property (retain) NSArray *children;
@property (retain) NSString *content;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)attributes;
- (id)children;
- (id)content;
- (id)initWithXMLNodePtr:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (id)name;
- (void)setAttributes:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setName:(id)arg1;

@end
