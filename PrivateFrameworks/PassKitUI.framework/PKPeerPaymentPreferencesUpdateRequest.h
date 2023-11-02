
@interface PKPeerPaymentPreferencesUpdateRequest : NSObject {
    NSMutableSet * _sections;
    PKPeerPaymentPreferences * _updatedPreferences;
}

@property (nonatomic, readonly, copy) NSSet *sections;
@property (nonatomic, readonly) PKPeerPaymentPreferences *updatedPreferences;

- (void).cxx_destruct;
- (void)coalesceWithRequest:(id)arg1;
- (id)description;
- (id)initWithUpdatedPreferences:(id)arg1 section:(long long)arg2;
- (id)sections;
- (id)updatedPreferences;

@end
