
@interface MDLVertexDescriptor : NSObject <NSCopying> {
    NSMutableArray * _attributes;
    NSMutableArray * _layouts;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic, retain) NSMutableArray *layouts;

+ (id)_decodeVertexDescriptorAttributesWithCoder:(id)arg1;
+ (id)_decodeVertexDescriptorLayoutsWithCoder:(id)arg1;
+ (id)decodeVertexDescriptorWithCoder:(id)arg1;

- (void).cxx_destruct;
- (void)_encodeVertexDescriptorAttributesWithCoder:(id)arg1;
- (void)_encodeVertexDescriptorLayoutsWithCoder:(id)arg1;
- (void)addOrReplaceAttribute:(id)arg1;
- (id)attributeNamed:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)debugPrintToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)description;
- (void)encodeVertexDescriptorWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVertexDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layouts;
- (void)removeAttributeNamed:(id)arg1;
- (void)reset;
- (void)setAttributes:(id)arg1;
- (void)setLayouts:(id)arg1;
- (void)setPackedOffsets;
- (void)setPackedStrides;

@end
