
@interface _CNRegExHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)doesStringLookLikeEmailAddress:(id)arg1;
+ (bool)doesStringLookLikePhoneNumber:(id)arg1;

- (unsigned long long)classificationOfHandleString:(id)arg1;

@end
