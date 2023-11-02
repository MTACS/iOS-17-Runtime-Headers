
@interface CKDetailsShowMoreContactsCell : CKDetailsCell <CKDetailsCell>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

@end
