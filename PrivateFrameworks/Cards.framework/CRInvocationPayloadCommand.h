
@interface CRInvocationPayloadCommand : CRBasicPayloadCommand <CRPayloadCommand> {
    NSString * _invocationIdentifier;
}

@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationIdentifier;
@property (nonatomic, retain) <NSSecureCoding><NSCopying> *payload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)invocationIdentifier;
- (id)payload;
- (void)setInvocationIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (bool)handleForCardViewController:(id)arg1;

@end
