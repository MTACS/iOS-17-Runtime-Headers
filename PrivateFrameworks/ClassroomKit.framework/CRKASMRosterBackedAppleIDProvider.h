
@interface CRKASMRosterBackedAppleIDProvider : NSObject <CRKAppleIDProviding> {
    <CRKASMRosterProviding> * _rosterProvider;
}

@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly) <CRKASMRosterProviding> *rosterProvider;

- (void).cxx_destruct;
- (id)appleID;
- (id)initWithRosterProvider:(id)arg1;
- (id)rosterProvider;

@end
