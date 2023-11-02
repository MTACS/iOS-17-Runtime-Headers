
@interface CNVCardEncoding : NSObject {
    NSString * _name;
    unsigned long long  _stringEncoding;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long stringEncoding;

+ (id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2;
+ (id)asciiEncoding;
+ (id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;
+ (id)encodingsFromUserDefaults;
+ (id)isoLatin1Encoding;
+ (id)macRomanEncoding;
+ (id)makeStandardEncodings;
+ (id)preferredEncodingInUserDefaults;
+ (id)standardEncodings;
+ (id)utf8Encoding;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;
- (id)name;
- (unsigned long long)stringEncoding;

@end