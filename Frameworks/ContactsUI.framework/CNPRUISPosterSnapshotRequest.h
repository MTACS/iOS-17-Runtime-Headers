
@interface CNPRUISPosterSnapshotRequest : NSObject {
    PRUISPosterSnapshotRequest * _wrappedRequest;
}

@property (nonatomic, readonly) PRUISPosterSnapshotRequest *wrappedRequest;

+ (id)requestForConfiguration:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3;
+ (id)requestForConfiguration:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3 windowScene:(id)arg4 attachments:(id)arg5;

- (void).cxx_destruct;
- (id)initWithWrappedRequest:(id)arg1;
- (id)wrappedRequest;

@end
