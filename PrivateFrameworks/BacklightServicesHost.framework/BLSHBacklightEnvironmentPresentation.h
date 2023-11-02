
@interface BLSHBacklightEnvironmentPresentation : NSObject {
    NSSet * _environmentsSet;
    NSDate * _expirationDate;
    BLSHFlipbookContext * _flipbookContext;
    NSArray * _presentationEntries;
}

@property (nonatomic, readonly) CAContext *caContext;
@property (nonatomic, readonly) BLSHPresentationDateSpecifier *currentSpecifier;
@property (nonatomic, readonly, copy) NSArray *environments;
@property (nonatomic, readonly) NSSet *environmentsSet;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) BLSHFlipbookContext *flipbookContext;
@property (getter=isLiveUpdating, readonly) bool liveUpdating;
@property (nonatomic, readonly, copy) NSArray *presentationEntries;
@property (getter=hasUnrestrictedFramerateUpdates, readonly) bool unrestrictedFramerateUpdates;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)caContext;
- (bool)containsEnvironment:(id)arg1;
- (id)currentSpecifier;
- (id)debugDescription;
- (id)description;
- (id)differenceFromPresentation:(id)arg1;
- (void)differenceFromPresentation:(id)arg1 forEachRemoval:(id /* block */)arg2 forEachAddition:(id /* block */)arg3;
- (id)environments;
- (id)environmentsSet;
- (id)expirationDate;
- (id)flipbookContext;
- (bool)hasUnrestrictedFramerateUpdates;
- (unsigned long long)hash;
- (id)initWithEnvironments:(id)arg1 caContext:(id)arg2 expirationDate:(id)arg3;
- (id)initWithPresentationEntries:(id)arg1 caContext:(id)arg2 expirationDate:(id)arg3;
- (id)initWithPresentationEntries:(id)arg1 flipbookContext:(id)arg2 expirationDate:(id)arg3;
- (void)invalidateContentForReason:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLiveUpdating;
- (id)presentationEntries;

@end
