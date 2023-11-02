
@interface CEImageIcon : CEIcon {
    NSURL * _URL1x;
    NSURL * _URL2x;
    NSURL * _URL3x;
}

@property (nonatomic, retain) NSURL *URL1x;
@property (nonatomic, retain) NSURL *URL2x;
@property (nonatomic, retain) NSURL *URL3x;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL1x;
- (id)URL2x;
- (id)URL3x;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setURL1x:(id)arg1;
- (void)setURL2x:(id)arg1;
- (void)setURL3x:(id)arg1;

@end
