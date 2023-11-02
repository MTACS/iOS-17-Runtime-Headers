
@interface PK_ipp_value_t : NSObject <NSCopying, NSSecureCoding> {
    NSObject * x_payload;
}

@property bool boolean;
@property (retain) PK_ipp_collection_t *collection;
@property struct ipp_value_date_t { unsigned char x1[11]; } date;
@property int integer;
@property struct ipp_value_range_t { int x1; int x2; } range;
@property struct ipp_value_resolution_t { int x1; int x2; int x3; } resolution;
@property struct ipp_value_string_t { id x1; id x2; } string;
@property (retain) NSData *unknown;

+ (bool)supportsSecureCoding;
+ (id)valueWithBoolean:(int)arg1;
+ (id)valueWithInteger:(int)arg1;
+ (id)valueWithString:(id)arg1;

- (void).cxx_destruct;
- (bool)boolean;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct ipp_value_date_t { unsigned char x1[11]; })date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)integer;
- (id)loggingValue:(int)arg1;
- (struct ipp_value_range_t { int x1; int x2; })range;
- (struct ipp_value_resolution_t { int x1; int x2; int x3; })resolution;
- (void)setBoolean:(bool)arg1;
- (void)setCollection:(id)arg1;
- (void)setDate:(struct ipp_value_date_t { unsigned char x1[11]; })arg1;
- (void)setInteger:(int)arg1;
- (void)setRange:(struct ipp_value_range_t { int x1; int x2; })arg1;
- (void)setResolution:(struct ipp_value_resolution_t { int x1; int x2; int x3; })arg1;
- (void)setString:(struct ipp_value_string_t { id x1; id x2; })arg1;
- (void)setUnknown:(id)arg1;
- (struct ipp_value_string_t { id x1; id x2; })string;
- (id)unknown;

@end
