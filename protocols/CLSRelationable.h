
@protocol CLSRelationable <NSObject>

@required

+ (NSSet *)relations;

- (NSString *)identity;

@end
