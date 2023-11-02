
@interface PXFileBackedAssetDescription : NSObject {
    NSMutableDictionary * _descriptionDictionary;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSURL *url;

+ (id)simpleImageDescriptionWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)url;

@end
