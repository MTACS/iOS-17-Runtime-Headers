
@interface ISGenericApplicationIcon : ISTypeIcon {
    ISResourceProvider * _resourceProvider;
}

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)makeResourceProvider;
- (id)resourceProvider;

@end
