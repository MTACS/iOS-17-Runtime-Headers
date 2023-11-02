
@interface WFEmail : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSString * _accountIdentifier;
    NSData * _identifier;
    EMDaemonInterface * _interface;
    NSArray * _recipients;
    WFEmailAddress * _sender;
    NSString * _subject;
    unsigned long long  _subjectPrefix;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) NSData *identifier;
@property (nonatomic, readonly) EMDaemonInterface *interface;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly) WFEmailAddress *sender;
@property (nonatomic, readonly, copy) NSString *subject;
@property (nonatomic, readonly) unsigned long long subjectPrefix;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAttachmentsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchContentRepresentationWithCompletionHandler:(id /* block */)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 subject:(id)arg3 sender:(id)arg4 recipients:(id)arg5;
- (id)interface;
- (id)recipients;
- (id)sender;
- (id)subject;
- (unsigned long long)subjectPrefix;
- (id)wfName;

@end
