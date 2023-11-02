
@interface RSObjectAsset : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _groups;
    NSMutableArray * _objects;
}

@property (nonatomic, readonly) NSDictionary *groups;
@property (nonatomic, readonly) NSArray *objects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GetAllObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groups;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)objects;

@end
