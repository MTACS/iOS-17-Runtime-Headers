
@interface DDSContentItem : NSObject {
    NSDictionary * _contents;
    DDSAsset * _parentAsset;
}

@property (nonatomic, retain) NSDictionary *contents;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, retain) DDSAsset *parentAsset;
@property (nonatomic, readonly) NSURL *path;
@property (nonatomic, readonly) NSDictionary *region;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)contents;
- (id)description;
- (id)fileName;
- (id)init;
- (id)initWithParentAsset:(id)arg1 contents:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContentItem:(id)arg1;
- (id)locale;
- (id)parentAsset;
- (id)path;
- (id)region;
- (void)setContents:(id)arg1;
- (void)setParentAsset:(id)arg1;
- (id)type;

@end
