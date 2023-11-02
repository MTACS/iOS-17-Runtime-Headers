
@interface GEMagicResult : NSObject {
    NSString * description;
    NSString * mimeType;
    NSString * uniformType;
    NSArray * uniformTypeHierarchy;
}

@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly, copy) NSString *uniformType;
@property (nonatomic, readonly, copy) NSArray *uniformTypeHierarchy;

- (void)dealloc;
- (id)description;
- (id)initWithMimeType:(id)arg1 description:(id)arg2 typeHierarchy:(id)arg3;
- (id)mimeType;
- (id)uniformType;
- (id)uniformTypeHierarchy;

@end
