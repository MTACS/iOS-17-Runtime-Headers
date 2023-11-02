
@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand> {
    unsigned long long  commandDirection;
    <NSSecureCoding><NSCopying> * payload;
    NSDictionary * userInfo;
}

@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSSecureCoding><NSCopying> *payload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (unsigned long long)commandDirection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)payload;
- (void)setCommandDirection:(unsigned long long)arg1;
- (void)setPayload:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (bool)handleForCardViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport

- (unsigned long long)inuickp_intrinsicInteractiveBehavior;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)handleForCardViewController:(id)arg1 cardViewControllerDelegate:(id)arg2;

@end
