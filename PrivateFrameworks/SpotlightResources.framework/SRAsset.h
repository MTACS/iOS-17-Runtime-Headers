
@interface SRAsset : NSObject {
    NSString * _contentType;
    NSString * _localeIdentifier;
    NSDictionary * _paths;
}

@property (nonatomic, readonly) NSArray *contentNames;
@property (nonatomic, readonly) NSArray *contentPaths;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *localeIdentifier;

+ (id)assetWithLocaleIdentifier:(id)arg1 contentType:(id)arg2 path:(id)arg3;
+ (id)assetWithLocaleIdentifier:(id)arg1 contentType:(id)arg2 resourceRoot:(id)arg3 pathNames:(id)arg4;

- (void).cxx_destruct;
- (id)contentNames;
- (id)contentPaths;
- (id)contentType;
- (id)description;
- (id)initWithLocaleIdentifier:(id)arg1 contentType:(id)arg2 paths:(id)arg3;
- (id)localeIdentifier;
- (id)pathWithName:(id)arg1;

@end
