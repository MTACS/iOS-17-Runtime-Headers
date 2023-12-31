
@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    HMOutgoingHomeInvitation * _outgoingInvitation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMOutgoingHomeInvitation *outgoingInvitation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeKitObject;
- (id)initWithOutgoingInvitation:(id)arg1;
- (id)outgoingInvitation;

@end
