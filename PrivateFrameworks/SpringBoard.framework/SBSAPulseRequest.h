
@interface SBSAPulseRequest : NSObject <SBSARequestRepresenting> {
    <NSCopying><SAElementIdentifying> * _participantIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <NSCopying><SAElementIdentifying> *participantIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithParticipantIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)participantIdentifier;

@end
