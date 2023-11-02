
@interface ECHTMLStringAndMIMECharset : NSObject <NSSecureCoding> {
    <ECMIMECharset> * _charset;
    NSString * _string;
}

@property (nonatomic, readonly) <ECMIMECharset> *charset;
@property (nonatomic, readonly, copy) NSString *string;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

- (void).cxx_destruct;
- (id)charset;
- (id)initWithString:(id)arg1 charset:(id)arg2;
- (id)string;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

+ (id)mf_utf8HTMLStringWithString:(id)arg1;

@end
