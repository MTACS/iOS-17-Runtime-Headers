
@interface MTLLinkedFunctions : NSObject <NSCopying> {
    NSArray * _privateFunctions;
}

@property (nonatomic, copy) NSArray *binaryFunctions;
@property (nonatomic, copy) NSArray *functions;
@property (nonatomic, copy) NSDictionary *groups;
@property (nonatomic, copy) NSArray *privateFunctions;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)linkedFunctions;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)privateFunctions;
- (void)reset;
- (void)setPrivateFunctions:(id)arg1;

@end
