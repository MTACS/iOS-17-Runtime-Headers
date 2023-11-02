
@protocol BNBannerSourceClientToHostInterface <NSObject>

@required

- (void)__layoutDescriptionWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BNBannerSourceLayoutDescription *, NSError *, void*
- (void)__postPresentableWithSpecification:(void *)arg1 options:(void *)arg2 userInfo:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: BNBannerSourcePresentableSpecification *, NSNumber *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)__recommendSuspension:(void *)arg1 forReason:(void *)arg2 revokingCurrent:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSNumber *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)__revokePresentablesWithIdentification:(void *)arg1 withAnimation:(void *)arg2 reason:(void *)arg3 userInfo:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: BNPresentableIdentification *, NSNumber *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__BNPresentableIdentification__> *, NSError *, void*

@end
