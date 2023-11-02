
@interface WBSUserTypedFormString : NSObject <WBSFormAutoFillItem> {
    NSString * _userTypedString;
}

@property (nonatomic, readonly) NSString *completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userTypedString;

- (void).cxx_destruct;
- (id)completion;
- (id)initWithUserTypedString:(id)arg1;
- (id)userTypedString;

@end
