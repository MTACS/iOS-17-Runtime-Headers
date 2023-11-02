
@interface _WBSSavedAccountPartialCredential : NSObject {
    NSDate * _creationDate;
    bool  _defaultCredentialForProtectionSpace;
    NSDate * _modificationDate;
    NSData * _persistentIdentifier;
    NSURLProtectionSpace * _protectionSpace;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (getter=isDefaultCredentialForProtectionSpace, nonatomic, readonly) bool defaultCredentialForProtectionSpace;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSData *persistentIdentifier;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithProtectionSpace:(id)arg1 modificationDate:(id)arg2 creationDate:(id)arg3 persistentIdentifier:(id)arg4 isDefaultCredentialForProtectionSpace:(bool)arg5;
- (bool)isDefaultCredentialForProtectionSpace;
- (id)modificationDate;
- (id)persistentIdentifier;
- (id)protectionSpace;

@end
