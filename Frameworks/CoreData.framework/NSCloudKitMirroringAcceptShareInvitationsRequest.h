
@interface NSCloudKitMirroringAcceptShareInvitationsRequest : NSCloudKitMirroringRequest {
    NSArray * _shareMetadatasToAccept;
    NSArray * _shareURLsToAccept;
}

- (void)dealloc;
- (id)description;
- (id)initWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;

@end
