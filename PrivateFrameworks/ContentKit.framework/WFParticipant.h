
@interface WFParticipant : NSObject <WFNaming, WFSerializableContent> {
    NSURL * _URL;
    NSPredicate * _contactPredicate;
    bool  _currentUser;
    NSString * _emailAddress;
    bool  _managed;
    NSString * _name;
    long long  _role;
    NSString * _sourceIdentifier;
    long long  _status;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (getter=isCurrentUser, nonatomic, readonly) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (getter=isManaged, nonatomic, readonly) bool managed;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long role;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)contactPredicate;
- (id)emailAddress;
- (unsigned long long)hash;
- (id)initWithEKParticipant:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 emailAddress:(id)arg3 status:(long long)arg4 role:(long long)arg5 type:(long long)arg6 sourceIdentifier:(id)arg7 isManaged:(bool)arg8 isCurrentUser:(bool)arg9 contactPredicate:(id)arg10;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToParticipant:(id)arg1;
- (bool)isManaged;
- (id)name;
- (long long)role;
- (id)sourceIdentifier;
- (long long)status;
- (long long)type;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
