
@protocol HMDAssistantAccessControlModelUpdateReceiver <NSObject>

@required

- (void)assistantAccessControlModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAssistantAccessControlModelV2 *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)assistantAccessControlModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMDAssistantAccessControlModelV2 *, HMDAssistantAccessControlModelV2 *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*

@end
