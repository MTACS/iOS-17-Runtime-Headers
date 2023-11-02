
@protocol VUIAppDocumentUpdateContext <NSObject>

@required

- (IKUpdateServiceRequest *)currentUpdateRequest;
- (void)updateCurrentUpdateRequestWithAppContext:(VUIAppContext *)arg1 documentRef:(NSString *)arg2;
- (void)updateRequestCompletedWithViewElements:(NSOrderedSet *)arg1 documentRef:(NSString *)arg2;

@end
