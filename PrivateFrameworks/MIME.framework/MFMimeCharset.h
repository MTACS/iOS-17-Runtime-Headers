
@interface MFMimeCharset : NSObject <ECMIMECharset, NSSecureCoding> {
    unsigned int  _canBeUsedForOutgoingMessages;
    NSString * _charsetName;
    unsigned int  _coversLargeUnicodeSubset;
    unsigned int  _encoding;
    NSString * _primaryLanguage;
    unsigned int  _useBase64InHeaders;
}

@property (nonatomic, readonly) bool canBeUsedForOutgoingMessages;
@property (nonatomic, readonly) unsigned int cfStringEncoding;
@property (nonatomic, readonly, copy) NSString *charsetName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long encoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useBase64InHeaders;

+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(bool)arg1;
+ (id)charsetForEncoding:(unsigned int)arg1;
+ (id)preferredMimeCharset;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPrimaryLanguage:(id)arg1;
- (bool)canBeUsedForOutgoingMessages;
- (unsigned int)cfStringEncoding;
- (id)charsetName;
- (bool)coversLargeUnicodeSubset;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)encoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncoding:(unsigned int)arg1;
- (id)primaryLanguage;
- (bool)useBase64InHeaders;

@end
