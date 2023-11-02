
@interface PKMultiKeyValueRow : NSObject <PKPayLaterCollectionViewRow> {
    NSArray * _sources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initKeyValueSources:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
