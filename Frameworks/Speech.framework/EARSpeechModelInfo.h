
@interface EARSpeechModelInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _acousticProfileVersion;
    NSString * _language;
    NSString * _phoneSetVersion;
    NSSet * _samplingRates;
    NSSet * _tasks;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *acousticProfileVersion;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *phoneSetVersion;
@property (nonatomic, readonly) NSSet *samplingRates;
@property (nonatomic, readonly) NSSet *tasks;
@property (nonatomic, readonly) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticProfileVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelInfo:(id)arg1;
- (id)language;
- (id)phoneSetVersion;
- (id)samplingRates;
- (id)tasks;
- (id)version;

@end
