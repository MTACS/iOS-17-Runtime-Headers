
@interface MPMediaPlaylistCreationMetadata : NSObject {
    NSString * _authorDisplayName;
    NSString * _defaultAuthorDisplayName;
    NSString * _descriptionText;
    NSString * _name;
}

@property (nonatomic, copy) NSString *authorDisplayName;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)authorDisplayName;
- (id)descriptionText;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setAuthorDisplayName:(id)arg1;
- (void)setDescriptionText:(id)arg1;

@end
