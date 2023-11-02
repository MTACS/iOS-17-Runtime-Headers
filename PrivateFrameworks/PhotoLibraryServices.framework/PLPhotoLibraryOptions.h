
@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding> {
    bool  _automaticallyMergesContext;
    bool  _automaticallyPinToFirstFetch;
    unsigned long long  _libraryInitiator;
    unsigned long long  _libraryRole;
    bool  _preventsWaitingForRequiredState;
    bool  _refreshesAfterSave;
    long long  _requiredState;
}

@property (nonatomic) bool automaticallyMergesContext;
@property (nonatomic) bool automaticallyPinToFirstFetch;
@property (nonatomic) unsigned long long libraryInitiator;
@property (nonatomic) unsigned long long libraryRole;
@property (nonatomic) bool preventsWaitingForRequiredState;
@property (nonatomic) bool refreshesAfterSave;
@property (nonatomic) long long requiredState;

+ (bool)supportsSecureCoding;

- (bool)automaticallyMergesContext;
- (bool)automaticallyPinToFirstFetch;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)libraryInitiator;
- (unsigned long long)libraryRole;
- (bool)preventsWaitingForRequiredState;
- (bool)refreshesAfterSave;
- (long long)requiredState;
- (void)setAutomaticallyMergesContext:(bool)arg1;
- (void)setAutomaticallyPinToFirstFetch:(bool)arg1;
- (void)setLibraryInitiator:(unsigned long long)arg1;
- (void)setLibraryRole:(unsigned long long)arg1;
- (void)setPreventsWaitingForRequiredState:(bool)arg1;
- (void)setRefreshesAfterSave:(bool)arg1;
- (void)setRequiredState:(long long)arg1;

@end
