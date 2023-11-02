
@interface AFSuggestion : NSObject {
    NSString * _altDSID;
    NSString * _applicationBundleId;
    NSString * _applicationKey;
    NSDictionary * _creditCardPayload;
    unsigned long long  _customInfoType;
    struct CGImage { } * _leadingImage;
    NSDictionary * _oneTimeCodePayload;
    NSString * _subTitle;
    NSString * _title;
    struct CGImage { } * _trailingImage;
    NSDictionary * _usernameAndPasswordPayload;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *applicationBundleId;
@property (nonatomic, readonly) NSString *applicationKey;
@property (nonatomic, readonly) NSDictionary *creditCardPayload;
@property (nonatomic, readonly) unsigned long long customInfoType;
@property (nonatomic, readonly) struct CGImage { }*leadingImage;
@property (nonatomic, readonly) NSDictionary *oneTimeCodePayload;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) struct CGImage { }*trailingImage;
@property (nonatomic, readonly) NSDictionary *usernameAndPasswordPayload;

- (void).cxx_destruct;
- (id)altDSID;
- (id)applicationBundleId;
- (id)applicationKey;
- (id)creditCardPayload;
- (unsigned long long)customInfoType;
- (id)initWithTitle:(id)arg1 applicationKey:(id)arg2 applicationBundleId:(id)arg3 altDSID:(id)arg4 customInfoType:(unsigned long long)arg5;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 creditCardPayload:(id)arg3 customInfoType:(unsigned long long)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 usernameAndPasswordPayload:(id)arg3 creditCardPayload:(id)arg4 oneTimeCodePayload:(id)arg5 leadingImage:(struct CGImage { }*)arg6 trailingImage:(struct CGImage { }*)arg7 applicationKey:(id)arg8 applicationBundleId:(id)arg9 altDSID:(id)arg10 customInfoType:(unsigned long long)arg11;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 usernameAndPasswordPayload:(id)arg3 leadingImage:(struct CGImage { }*)arg4 trailingImage:(struct CGImage { }*)arg5 applicationKey:(id)arg6 applicationBundleId:(id)arg7 altDSID:(id)arg8 customInfoType:(unsigned long long)arg9;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 usernameAndPasswordPayload:(id)arg3 leadingImage:(struct CGImage { }*)arg4 trailingImage:(struct CGImage { }*)arg5 customInfoType:(unsigned long long)arg6;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 oneTimeCodePayload:(id)arg3 customInfoType:(unsigned long long)arg4;
- (struct CGImage { }*)leadingImage;
- (id)oneTimeCodePayload;
- (id)subTitle;
- (id)title;
- (struct CGImage { }*)trailingImage;
- (id)usernameAndPasswordPayload;

@end
