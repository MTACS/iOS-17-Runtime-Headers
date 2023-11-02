
@interface WFAppIntentArchiver : NSObject {
    LNFullyQualifiedActionIdentifier * _actionIdentifier;
    LNActionMetadata * _actionMetadata;
}

@property (nonatomic, readonly, copy) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (nonatomic, copy) LNActionMetadata *actionMetadata;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionMetadata;
- (void)archiveAction:(id)arg1 completion:(id /* block */)arg2;
- (id)archiveAction:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1 actionMetadata:(id)arg2;
- (id)resolvedActionMetadataWithError:(id*)arg1;
- (void)setActionMetadata:(id)arg1;
- (void)unarchiveActionFromData:(id)arg1 completion:(id /* block */)arg2;
- (id)unarchiveActionFromData:(id)arg1 error:(id*)arg2;

@end
