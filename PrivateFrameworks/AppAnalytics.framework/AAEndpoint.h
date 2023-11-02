
@interface AAEndpoint : NSObject <AAEndpointType> {
    void name;
    void sharedContainerIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sharedContainerIdentifier;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1 name:(id)arg2 sharedContainerIdentifier:(id)arg3;
- (id)name;
- (id)sharedContainerIdentifier;
- (id)url;

@end
