
@interface CNUIInteractionDonor : NSObject <CNUIInteractionDonor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void)donateInteraction:(id)arg1;

@end
