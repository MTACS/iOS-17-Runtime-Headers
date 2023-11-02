
@interface POPodcastRevision : NSObject {
    bool  _isPodcastCollection;
    NSString * _objectID;
    unsigned long long  _revisionID;
    long long  _revisionType;
}

@property bool isPodcastCollection;
@property (nonatomic, retain) NSString *objectID;
@property (nonatomic) unsigned long long revisionID;
@property (nonatomic) long long revisionType;

- (void).cxx_destruct;
- (id)deletedModelObject;
- (id)description;
- (bool)isPodcastCollection;
- (id)objectID;
- (unsigned long long)revisionID;
- (long long)revisionType;
- (void)setIsPodcastCollection:(bool)arg1;
- (void)setObjectID:(id)arg1;
- (void)setRevisionID:(unsigned long long)arg1;
- (void)setRevisionType:(long long)arg1;

@end
