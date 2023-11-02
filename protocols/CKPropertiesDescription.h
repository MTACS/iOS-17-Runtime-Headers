
@protocol CKPropertiesDescription <NSObject>

@required

- (void)CKDescribePropertiesUsing:(CKObjectDescription *)arg1;

@optional

- (NSString *)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (NSString *)CKShortDescriptionRedact:(bool)arg1;

@end
