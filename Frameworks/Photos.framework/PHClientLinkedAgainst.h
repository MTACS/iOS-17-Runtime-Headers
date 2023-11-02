
@interface PHClientLinkedAgainst : NSObject {
    bool  _clientLinkedOnOrAfterFall2023OSVersions;
}

@property (nonatomic, readonly) bool clientLinkedOnOrAfterFall2023OSVersions;

- (bool)clientLinkedOnOrAfterFall2023OSVersions;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initWithXPCDict:(id)arg1;

@end
