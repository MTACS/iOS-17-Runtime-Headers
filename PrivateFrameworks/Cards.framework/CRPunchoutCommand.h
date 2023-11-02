
@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand> {
    SFPunchout * _punchout;
}

@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSSecureCoding><NSCopying> *payload;
@property (nonatomic, retain) SFPunchout *punchout;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)payload;
- (id)punchout;
- (void)setPunchout:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (id)crk_backingPunchout;
- (bool)handleForCardViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport

- (unsigned long long)inuickp_intrinsicInteractiveBehavior;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)handleForCardViewController:(id)arg1 cardViewControllerDelegate:(id)arg2;

@end
