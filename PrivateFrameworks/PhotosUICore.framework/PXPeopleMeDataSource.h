
@interface PXPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource> {
    CNContact * _meContact;
    bool  _requestedMeContact;
    bool  _requestedSuggestedPerson;
    <PXPerson> * _suggestedPerson;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContact *meContact;
@property (getter=hasRequestedMeContact, nonatomic) bool requestedMeContact;
@property (getter=hasRequestedSuggestedPerson, nonatomic) bool requestedSuggestedPerson;
@property (nonatomic, retain) <PXPerson> *suggestedPerson;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchPersonWithUri:(id)arg1;
- (void)_persistSuggestedPersonAsMe;
- (void)_requestMeContactWithCompletion:(id /* block */)arg1;
- (id)_suggestedPersonForMe;
- (bool)hasRequestedMeContact;
- (bool)hasRequestedSuggestedPerson;
- (void)hasSuggestedPersonForMeWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)meContact;
- (void)setMeContact:(id)arg1;
- (void)setRequestedMeContact:(bool)arg1;
- (void)setRequestedSuggestedPerson:(bool)arg1;
- (void)setSuggestedPerson:(id)arg1;
- (id)suggestedPerson;
- (id)suggestedPersonForMeViewController:(id)arg1;
- (void)userDidAnswerMeViewController:(id)arg1 withResponse:(bool)arg2 suggestedPerson:(id)arg3;

@end
