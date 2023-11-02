
@interface PPTripEventQuery : PPEventQuery {
    unsigned char  _tripOptions;
}

@property (nonatomic) unsigned char tripOptions;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTripOptions:(unsigned char)arg1;
- (unsigned char)tripOptions;

@end
