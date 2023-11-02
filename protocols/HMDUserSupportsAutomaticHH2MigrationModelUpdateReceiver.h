
@protocol HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver <NSObject>

@required

- (void)userSupportsAutomaticHH2MigrationModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDUserSupportsAutomaticHH2MigrationModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)userSupportsAutomaticHH2MigrationModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMDUserSupportsAutomaticHH2MigrationModel *, HMDUserSupportsAutomaticHH2MigrationModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*

@end
