
@interface POPodcastModelObject : NSObject {
    NSString * _feedUrl;
    NSIndexPath * _indexPath;
    NSString * _storeId;
    NSString * _title;
    NSString * _uuid;
}

@property (readonly) SAMPCollection *SAMPCollection;
@property (retain) NSString *feedUrl;
@property (retain) NSIndexPath *indexPath;
@property (retain) NSString *storeId;
@property (retain) NSString *title;
@property (retain) NSString *uuid;

+ (Class)SAMPClass;
+ (id)uriScheme;

- (void).cxx_destruct;
- (id)SAMPCollection;
- (id)description;
- (id)feedUrl;
- (id)indexPath;
- (void)setFeedUrl:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setStoreId:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)storeId;
- (id)title;
- (id)uuid;

@end
