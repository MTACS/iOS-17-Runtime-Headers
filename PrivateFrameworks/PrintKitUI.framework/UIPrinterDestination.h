
@interface UIPrinterDestination : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _displayName;
    NSData * _txtRecord;
}

@property (copy) NSURL *URL;
@property (copy) NSString *displayName;
@property (copy) NSData *txtRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setTxtRecord:(id)arg1;
- (void)setURL:(id)arg1;
- (id)txtRecord;

@end
