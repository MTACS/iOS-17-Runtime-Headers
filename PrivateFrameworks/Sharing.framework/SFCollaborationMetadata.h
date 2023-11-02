
@interface SFCollaborationMetadata : NSObject {
    NSArray * _defaultOptions;
    SFCollaborationShareOptions * _defaultShareOptions;
}

@property (nonatomic, readonly) NSArray *defaultOptions;
@property (nonatomic, readonly) SFCollaborationShareOptions *defaultShareOptions;

- (void).cxx_destruct;
- (id)defaultOptions;
- (id)defaultShareOptions;

@end
