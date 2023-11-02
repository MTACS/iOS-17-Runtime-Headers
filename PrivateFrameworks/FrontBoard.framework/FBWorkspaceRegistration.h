
@interface FBWorkspaceRegistration : NSObject {
    bool  _acceptsClientScenes;
    NSString * _identifier;
}

@property (nonatomic, readonly) bool acceptsClientScenes;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)registrationWithIdentifier:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (bool)acceptsClientScenes;
- (id)description;
- (id)identifier;

@end
