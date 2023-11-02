
@interface OTBottleIDs : NSObject {
    NSArray * _partialRecoveryBottleIDs;
    NSArray * _preferredBottleIDs;
}

@property (retain) NSArray *partialRecoveryBottleIDs;
@property (retain) NSArray *preferredBottleIDs;

- (void).cxx_destruct;
- (id)partialRecoveryBottleIDs;
- (id)preferredBottleIDs;
- (void)setPartialRecoveryBottleIDs:(id)arg1;
- (void)setPreferredBottleIDs:(id)arg1;

@end
