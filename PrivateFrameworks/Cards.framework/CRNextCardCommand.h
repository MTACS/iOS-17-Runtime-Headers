
@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand> {
    <CRCard> * _nextCard;
}

@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CRCard> *nextCard;
@property (nonatomic, retain) <NSSecureCoding><NSCopying> *payload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)nextCard;
- (id)payload;
- (void)setNextCard:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (bool)handleForCardViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport

- (unsigned long long)inuickp_intrinsicInteractiveBehavior;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)handleForCardViewController:(id)arg1 cardViewControllerDelegate:(id)arg2;

@end
