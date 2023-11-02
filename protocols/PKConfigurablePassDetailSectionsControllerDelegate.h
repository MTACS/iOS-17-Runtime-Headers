
@protocol PKConfigurablePassDetailSectionsControllerDelegate <NSObject>

@required

- (void)presentAuthRequestForPolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentPassDetailDrillInForField:(PKPassSectionDetailDrillInField *)arg1;

@end
