
@interface TPSURLAction : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSString * _text;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (id)text;
- (unsigned long long)type;

@end
