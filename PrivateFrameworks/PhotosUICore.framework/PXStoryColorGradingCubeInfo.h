
@interface PXStoryColorGradingCubeInfo : NSObject {
    NSDictionary * _backingDict;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) bool isAutoSelectable;
@property (nonatomic, readonly) bool isUserSelectable;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *resource;
@property (nonatomic, readonly) NSString *tier;

- (void).cxx_destruct;
- (id)categories;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isAutoSelectable;
- (bool)isUserSelectable;
- (id)name;
- (id)resource;
- (id)tier;

@end
