
@interface ENWebArchive : NSObject {
    ENWebResource * _mainResource;
    NSArray * _subframeArchives;
    NSArray * _subresources;
}

@property (nonatomic, retain) ENWebResource *mainResource;
@property (nonatomic, retain) NSArray *subframeArchives;
@property (nonatomic, retain) NSArray *subresources;

+ (id)webArchiveWithData:(id)arg1;
+ (id)webArchiveWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)mainResource;
- (id)propertyList;
- (void)setMainResource:(id)arg1;
- (void)setSubframeArchives:(id)arg1;
- (void)setSubresources:(id)arg1;
- (id)subframeArchives;
- (id)subresources;

@end
