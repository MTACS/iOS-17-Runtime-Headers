
@interface USKObject : NSObject {
    USKToken * _name;
    USKObjectPath * _path;
}

@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly, retain) USKToken *name;
@property (nonatomic, readonly, retain) USKObjectPath *path;

- (void).cxx_destruct;
- (id)metadata;
- (id)name;
- (id)path;

@end
