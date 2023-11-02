
@interface MCMResultFetchPersonaUniqueStrings : MCMResultBase {
    NSSet * _personaUniqueStrings;
}

@property (nonatomic, retain) NSSet *personaUniqueStrings;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)initWithPersonaUniqueStrings:(id)arg1;
- (id)personaUniqueStrings;
- (void)setPersonaUniqueStrings:(id)arg1;

@end
