
@interface TPSNotificationCache : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _attachmentURL;
    NSString * _collectionIdentifier;
    TPSDocument * _document;
    NSDictionary * _extensionPayload;
    NSString * _locale;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSURL *attachmentURL;
@property (nonatomic, retain) NSString *collectionIdentifier;
@property (nonatomic, retain) TPSDocument *document;
@property (nonatomic, retain) NSDictionary *extensionPayload;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) unsigned long long type;

+ (id)notificationCacheWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentURL;
- (id)collectionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)document;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionPayload;
- (bool)hasLocaleChanged;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3;
- (id)locale;
- (void)setAttachmentURL:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setExtensionPayload:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
