
@interface EKVirtualConferenceExtensionContext : NSExtensionContext

@property (nonatomic, readonly) NSURL *URLForInvalidation;
@property (nonatomic, readonly) NSURL *URLForRenewal;
@property (nonatomic, readonly) NSDate *renewalDate;
@property (nonatomic, readonly) int requestType;
@property (nonatomic, readonly) NSString *roomTypeIdentifier;

+ (id)_allowedItemPayloadClasses;

- (id)URLForInvalidation;
- (id)URLForRenewal;
- (void)completeRequestWithAvailableRoomTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeRequestWithInvalidationSuccess:(bool)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)completeRequestWithRenewalSuccess:(bool)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)completeRequestWithVirtualConference:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)renewalDate;
- (int)requestType;
- (id)roomTypeIdentifier;

@end
