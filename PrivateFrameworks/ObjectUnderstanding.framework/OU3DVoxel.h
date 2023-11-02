
@interface OU3DVoxel : NSObject <NSCopying, NSSecureCoding> {
    void center;
    NSUUID * object_id;
    unsigned char  semantic_label;
    void size;
}

@property (nonatomic) void center;
@property (nonatomic, retain) NSUUID *object_id;
@property (nonatomic) unsigned char semantic_label;
@property (nonatomic) void size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)object_id;
- (unsigned char)semantic_label;
- (void)setCenter;
- (void)setObject_id:(id)arg1;
- (void)setSemantic_label:(unsigned char)arg1;
- (void)setSize;
- (void)size;

@end
