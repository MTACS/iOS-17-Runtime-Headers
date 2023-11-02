
@interface PGGraphIngestMessageProcessor : NSObject <PGGraphIngestProcessor> {
    NSSet * _contactIdentifiers;
    PGGraphBuilder * _graphBuilder;
    PGMessageProfile * _messageProfile;
    NSDictionary * _personLocalIdentifierByCNIdentifier;
    NSSet * _personNodes;
}

@property (nonatomic, readonly) NSSet *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGMessageProfile *messageProfile;
@property (nonatomic, retain) NSDictionary *personLocalIdentifierByCNIdentifier;
@property (nonatomic, readonly) NSSet *personNodes;
@property (readonly) Class superclass;

+ (id)addressComponentFromText:(id)arg1 usingDataDetector:(id)arg2;
+ (id)loveEmojis;
+ (unsigned long long)numberOfEmojis:(id)arg1 inText:(id)arg2;

- (void).cxx_destruct;
- (bool)_isInterestingGroupChatWithPersons:(id)arg1;
- (id)contactIdentifiers;
- (id)initWithGraphBuilder:(id)arg1;
- (id)messageProfile;
- (id)personLocalIdentifierByCNIdentifier;
- (id)personNodes;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setMessageProfile:(id)arg1;
- (void)setPersonLocalIdentifierByCNIdentifier:(id)arg1;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
