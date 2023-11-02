
@interface STKTelephonySelectionListItemsProvider : NSObject <STKTelephonyListItemsProvider> {
    CoreTelephonyClient * _telephonyClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTelephonyClient:(id)arg1;
- (id)selectionListItemsForContext:(id)arg1 options:(id)arg2;

@end
