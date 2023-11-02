
@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing> {
    NSURL * _feedURL;
    NSString * _podcastUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSURL *feedURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *podcastUUID;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)feedURL;
- (id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 feedURL:(id)arg4 kind:(id)arg5;
- (id)podcastUUID;
- (void)setFeedURL:(id)arg1;
- (void)setPodcastUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)podcastQueryDictionary;

@end
